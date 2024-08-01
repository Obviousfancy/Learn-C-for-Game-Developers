#include <iostream>
#include <string> 

using namespace std;


class Dog
{

	/// <summary>
	/// Esto tenemos que ponerlo al principio de la clase para indicar que parte de la clase estara de manera publica.
	/// </summary>
public:

	Dog();
	void Bark();
	/*/Constructor iniciado dentro de la clase
	Dog()
	{

		Name = "Default";
		Age = 10;
		Health = 100.f;

	}*/


	string Name;
	int Age;
	float Health;

	


};


int main()
{
	Dog dog;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;
	dog.Bark();

	dog.Name = "Spark";
	dog.Age = 3;
	dog.Health = 98.f;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	Dog Rox;


}

///Inicializando el constructor fuera de la clase
Dog::Dog() 
{

	Name = "Default";
	Age = 10;
	Health = 100.f;

}

void Dog::Bark() 
{

	cout << "Woof!!!" << endl; 

}