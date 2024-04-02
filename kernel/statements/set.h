// Important headerfile and Responsible for set statement

using namespace std;

// for setting defaults
int set_defaults(){
	
		string d;
		cin>>d;
		
		if (d == "symbol"){
			
			string symbol;
			cin>>symbol;
			set_default_symbol(symbol);
			
		}
		else{
			
			cout<<"Nothing found anything else in default compiled list";
			
		}
	
}


int set(string ARGS){
	
	if (ARGS == "-i"){
		
		// ignore
		
	}
	else if (ARGS == "-o"){
		
		cout<<"There is only 1 output compilant which is already in running status";
		
	}
	else if (ARGS == "-e"){
		
		cout<<"Can not set input compilant which is already in running status and used in various forms by other statements";
		
	}
	else if (ARGS == "-d"){
		
		set_defaults();
		
	}
	
	else if (ARGS == "-n"){
		
		cout<<"Unable to understand new compilant did you mean -i for ignore ?";
		
	}
	
	else if (ARGS == "default"){
		
				set_defaults();

		
	}
	
}