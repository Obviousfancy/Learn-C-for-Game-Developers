#include <iostream>
#include <string>

using namespace std;



class Animal 
{

public:
	Animal();
	Animal(string name,int age,int num_limbs);
	
	string Name;
	int Age;
	int numberOfLimbs;

	void Report();

};

class Dog : public Animal
{

public:
	Dog();
	Dog(string name, int age, int num_limbs);

	void Speak();
};

class Bulldog : public Dog
{

public:


};

int main()
{
	///Cuando creamos un animal automaticamente el constructor es llamado, en este caso, lo que tiene el constructor sera la impresión en pantalla de el constructor
	/*Animal animal;

	Animal animal_2("Chetah", 7, 5);

	animal_2.Report();

	animal.Report();*/

	///Dog dog("Spot", 5, 2);
	///dog.Speak();
	/// 
	Bulldog bulldy;
	bulldy.Name = "Corgi";
	bulldy.Age = 2;
	bulldy.numberOfLimbs = 4;

	bulldy.Report();
	
	//dog.Report();


}


Animal::Animal() 
{

	cout << "An animal is born" << endl;

	Name = "Default";
	Age = 3;
	numberOfLimbs = 4;

}

Animal::Animal(string name, int age, int num_limbs)///the next step is another way to inicialize the variables 
	:Name(name),Age(age),numberOfLimbs(num_limbs)
{

	Report();
	///THIS IS A WAY TO DECLARATE SOME VARIABLES THAT YOU HAVE LIKE AN INPUT PARAMETER OF THE CONSTRUCTOR
	/*Name = name;
	Age = age;
	numberOfLimbs = num_limbs;*/


}
void Animal::Report()
{  

	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Number of limbs: " << numberOfLimbs << endl;
	cout << endl;

}


Dog::Dog() 
{

	cout << "New Dog" << endl;

}

Dog::Dog(string name, int age, int num_limbs)
	: Animal(name, age, num_limbs) ///This is the second way to declarate values using the constructor of our parent class
{
	///This is one way to call another constructor from the parent of the inherit class Dog
	///Animal(name, age, num_limbs);


}

void Dog::Speak()
{

	cout << "Woof!!" << endl;

}
