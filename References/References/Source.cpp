#include <iostream>

using namespace std;

void AddOne(int num);
void AddOneB(int& num2);

int main() 
{
	/// Paso por valor
	/// En el paso por valor nosotros pasaremos solo el valor de la variable pero no cambiaremos la variable original
	/// cambiaremos en la función una copia de la variable, por lo cual en este caso pasaremos el valor de la variable 
	/// y dentro de la función la variable que le pasamos pasara a ser 2 pero si imprimimos la variable a seguira siendo 1 porque la variable a nunca se modifico
	int a = 1;

	/*cout << a << endl;

	AddOne(a);
	cout<< a<< endl;*/

	/// Paso por referencia
	/// En el paso por referencia al agregar el signo /* & */ podremos indicarle al programa que tomaremos como referencia el valor de la variable que le esamos pasando
	/// Asi que cuando haga el trabajo con la variable, cambiara desde la raiz la variable, y no solo tomara una copia de ella
	/// En este caso, creamos b con valor de 1, y la imprimimos y de ahi llamamos a la función AddOneB, a la cual le pasaremos b, cuya función, tiene un valor de entrada por referencia int
	/// llamado num2, pero al decirle que tenemos ese valor por referencia estaremos modificando la variable b, por lo cual cuando imprimamos b nuevamente tendra un valor de 2
	int b = 1;
	cout << b << endl;

	AddOneB(b);
	cout << b << endl;



}

void AddOne(int num) 
{
	cout << num << endl;
	num++;
	cout << num << endl;

}

void AddOneB(int& num2) 
{

	num2++;

}