#include <iostream>
using namespace std;

///Way to declare a function in C++
void welcome() 
{

	cout << "Welcome!! \n ";

}



/// Function with a input parameter, that doesn't return anything

void printNumber(int numToPrint)
{

	cout << "El resultado  es: " << numToPrint << endl;

}

/// function that return a value, in this case specified by the firt word in the line, that is int, that specifie what is the value to return
int add(int a, int b) 
{

	int result;
	result = a + b;
	
	return result;

}

int main() 
{

	welcome();
	printNumber(2);

	int resultado = add(4, 2);
	printNumber(resultado);

	system("pause");


}