#include <iostream>
#include <string>

using namespace std;

struct Container 
{

	string Name;
	int X;
	int Y;
	int Z;
	 

};

int main() {

	int a = 2;

	int* aPtr;			///Creammos el apuntador aPtr

	aPtr = &a;			///Conseguimos la direccion de la variable usando el operador & que nos dara la direccion o referencia de la variable a

	cout << aPtr << endl;
		
	cout << *aPtr << endl;

	int b = 50;

	aPtr = &b;

	cout << aPtr << endl;

	cout << *aPtr << endl;


	/// POINTERS EN ARRAYS
	int numbers[] = {0,1,2,3,4,5,6,7,8,9,10};

	int* numPtr = numbers;

	cout << numPtr << endl;

	cout << *numPtr << endl;

	numPtr++;

	cout << *numPtr << endl;

	numPtr += 3;

	cout << *numPtr << endl;

	numPtr += 6;

	cout << *numPtr << endl;


	Container container = {"Sam",5,6,7};

	Container* PtrCont = &container;

	cout << (*PtrCont).Name << endl;

	cout << (*PtrCont).X << endl;
	cout << (*PtrCont).Y << endl;
	cout << (*PtrCont).Z << endl;

	Container container2 = { "Jonathan",8,9,10 };

	PtrCont = &container2;

	cout << PtrCont -> Name << endl;
	cout << PtrCont -> X << endl;
	cout << PtrCont -> Y << endl;
	cout << PtrCont -> Z << endl;


}