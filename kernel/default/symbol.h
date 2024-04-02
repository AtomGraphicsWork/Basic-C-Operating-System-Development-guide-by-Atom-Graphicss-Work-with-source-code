// This file is important to handle the startup kernel left side defauly symbol

#include <fstream>
#include <iostream>

using namespace std;

string default_symbol;

int set_up_symbol_file(){
	
	// opening symbol file
ifstream symbol_file("files/startup_default.symbol");

if (symbol_file.is_open()){
	
	symbol_file>>default_symbol;
	
}
else {
	
	ofstream symbol("files/startup_default.symbol");
	symbol<<"/>";
	default_symbol = "/>";
	
}
	
}




set_default_symbol(string ARGS){
	
	if (ARGS == "-d"){
		
		ofstream new_Symbol("file/startup_default.symbol");
		new_Symbol<<"/>";
		cout<<"/n/n New Symbol was applied successfully needed for a restart for see the results";
		
	}
	else {
		
		ofstream new_Symbol("file/startup_default.symbol");
		new_Symbol<<ARGS;
		cout<<"/n/n New Symbol was applied successfully needed for a restart for see the results";
		
	}
	
}