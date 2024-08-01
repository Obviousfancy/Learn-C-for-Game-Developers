#include <iostream>
#include <string>

using namespace std;

int main() 
{

	char MyString[5] = {'D','o','g','s','\0'};

	cout << MyString << endl;

	string myString = "My dog's name is ";


	string first = "Spot ";

	string last = "Jones ";

	myString += first;
	myString += last;


	cout << myString << endl;

	myString += (first + last);

	cout << myString << endl;

	
}