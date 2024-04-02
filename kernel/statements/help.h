// help headerfile responsible for help statement to work in a proper manner

// basic headerfile contains all the required C++ STD and NON-STD header files
#include "basic.h"

using namespace std;

int HELP(){

	
	cout<<"List of ARGS (Arguments)\n\n -i : ignore \n -l : line \n -n : new \n -o : out \n -e : input \n -d : default"<<endl<<endl<<"List of commands \n\n PRINT <ARGS> : Use for print something on screen\n HELP, /help, help(): Use for provide the list of all things present in kernel \n\n set <ARGS> : Use to set something \n\n\n Copyright (c) LowerLevel OS KERNEL";
	cout<<endl<<endl;
	
}