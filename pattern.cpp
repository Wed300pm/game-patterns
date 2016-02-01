//This is the implementation (definition) file for pattern1 classes.
//It also includes definitions for functions.

//#ifndef PATTERN1CLASSES_H
//#define PATTERN1CLASSES_H

#include <iostream>
using namespace std;


#include "pattern1classes.h"





//Definitions for the Command base class:
Command::Command() {} //empty body for default constructor
void Command::execute()
{

} //??? Shouldn't do anything


//Definitions for the JumpCommand inherited class:
JumpCommand::JumpCommand() : Command() {} //call base class constructor
void JumpCommand::execute() //execute Jump command
{
	cout << "I am now jumping!" << endl;
}


//Definitions for the FireCommand inherited class:
FireCommand::FireCommand() : Command() {} //call base class constructor
void FireCommand::execute() //execute Fire command
{
	cout << "I am now firing!" << endl;
}


//#endif // PATTERN1CLASSES_H