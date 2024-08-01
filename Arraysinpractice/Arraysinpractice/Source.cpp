#include <iostream>

using namespace std;

int main() 
{

	int myIntArray[10];

	for (int i = 0; i < 10; i++)
	{
		myIntArray[i] = i + 1;

		cout << myIntArray[i] << endl;
	}

	cout << "The first element in my int Array is: " << myIntArray[0] << endl;

	cout << "The fifht element in my int Array is: " << myIntArray[4] << endl;

	///Another way to declarate arrays

	int myArray2[5] =
	{
		1,
		23,
		5,
		6,
		8
	};

	/// Another way to declarate arrays
	int myArray3[5] = { 1,23,5,6,8 };

	/// Another way to print our array elements
	cout << myArray2[0] << endl;
	cout << myArray2[1] << endl;
	cout << myArray2[2] << endl;
	cout << myArray2[3] << endl;
	cout << myArray2[4] << endl;


	///Third way to print arrays in screen
	for (int i = 0; i < 5; i++) 
	{

		cout << "My array[" << i << "]" << "is: " << myArray3[i] <<endl;

	}


}