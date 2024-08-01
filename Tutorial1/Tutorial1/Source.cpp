#include <iostream>     //We include the iostream library, coding this text, that we permise write some especific lines of code in our program
using namespace std;


int main() 
{
	///We can declarate a variable like in the first text in lines 8 and 9, or like in the 11 line
	char myVariable1;
	myVariable1 = 'b';   //We need to declarate a variable, because if we dont have to, visual studio assign to this variable garbage that consume much memmory

	char myVariable = 'a';

	int myInt = 1;

	cout << myVariable << endl;
	cout << myVariable1 << endl;
	cout << "My int is " << myInt << endl;

	myVariable1 = 'b';   //We need to declarate a variable, because if we dont have to, visual studio assign to this variable garbage that consume much memmory

	myVariable = 'c';

	myInt = 3;

	cout << myVariable << endl;
	cout << myVariable1 << endl;
	cout << "My int is " << myInt << endl;
}

