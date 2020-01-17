//============================================================================
// Name        : 4_Functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//a change
#include <iostream>

//great solution - define your functions in a header file
//if you have to change the function signature just change in the header
//works even if functions used in 100 other .cpp files
#include "myFunctions.h"
using namespace std;

//BAD SOLUTION
//OK for 1 function but clutters the page if your
//program has a hundred functions
//In industry people would say this 'does not scale well'
int myFullyDefinedInASingleFileFunction(){
	return 0; //body goes here
};

//Forward Declaration - not used much
//Useful to handle circular dependencies
//if you get in a situation where object a uses Object B and Object B uses Object A,
//and you cant see a way to get it to work, think FORWARD DECLARATION
//see http://stackoverflow.com/questions/6444071/circular-references-in-c-in-different-files for example
//Can sometimes be used to reduce compile times
//see accepted answer here http://stackoverflow.com/questions/4757565/c-forward-declaration
int myForwardDeclarationFunction();


int main() {
	myFullyDefinedInASingleFileFunction();
	myForwardDeclarationFunction();


	myfunc1();
	myfunc2();
	myfunc3();

	return 0;
}

int myForwardDeclarationFunction(){
	return 0;
}

