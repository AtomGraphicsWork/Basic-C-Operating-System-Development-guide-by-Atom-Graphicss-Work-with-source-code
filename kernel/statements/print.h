// Print headerfile responsible for print statement to work in a proper manner

// basic headerfile contains all the required C++ STD and NON-STD header files
#include "basic.h"

using namespace std;


int PRINT(string ARGS){

	if (ARGS == "-i"){
		// Ignored
	}
	else if (ARGS == "-l"){
		string PRINT_LINE;
		getline(cin, PRINT_LINE);
		cout<<endl<<endl<<PRINT_LINE<<endl<<endl;
	}
	
	else if (ARGS == "-n"){
		string PRINT_LINE;
		cin>>PRINT_LINE;
		cout<<endl<<endl<<PRINT_LINE<<endl<<endl;
	}
	
	else if (ARGS == "-d"){
		string PRINT_LINE;
		cin>>PRINT_LINE;
		cout<<endl<<endl<<PRINT_LINE<<endl<<endl;
	}
	
	else if (ARGS == "-o"){
		string PRINT_LINE;
		cin>>PRINT_LINE;
		cout<<endl<<endl<<PRINT_LINE<<endl<<endl;
	}
	
	else if (ARGS == "-e"){
		cout<<endl<<endl<<"ERROR PRINT can only perform output taskings not an input tasking , use -i , -l, -o, -n only, -e is an invalid ARG for PRINT"<<endl<<endl;
	}
	
	else {
		
		cout<<endl<<endl<<ARGS<<endl<<endl;
		
	}
	//Othervise Ingonred
	
	
}