#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdio>
#include "startup_files.h"
#include "statements.h"

using namespace std;

int main(){
	// basic definations
	set_up_symbol_file();
	
	
	// White loop
	string command;
	
	// loop = true;
	while (true){
		
		// default symbol
		
		cout<<default_symbol;
		
		// commands which can be executed
		cin>>command;
		
		// PRINT COMMAND
		if (command == "PRINT"){
			string _PRINT;
			cin>>_PRINT;
			PRINT(_PRINT);
		}
		
		
		// HELP COMMAND
		else if (command == "HELP"){
			HELP();
		}
		
		// help() function
		else if (command == "help()"){
			HELP();
		}
		
		
		// /help parameter
		else if (command == "/help"){
			HELP();
		}
		
		// set command
		else if (command == "set"){
			string _set;
			cin>>_set;
			set(_set);
		}
		
		
		// ERROR MESSAGE if an Invalid command is found
		else {
			
			cout<<"ERROR command not found in compiled list please make it sure to enter the valid command \n Use /help , help() ,HELP to get the list of command"<<endl<<endl;
			
		}
		
	}
	
}