#include <iostream>

using namespace std;

class Character 
{
public:
	Character();
	~Character();

	int* CharacterAge;
	float* CharacterHealth;

};

int main() 
{

	Character* Char = new Character;
	delete Char;

}


Character::Character() 
{

	cout << "A new character was created" << endl;
	CharacterAge = new int(10);
	CharacterHealth = new float(100.0);

}

Character::~Character() 
{

	cout << "The caracter was destroyed \n";
	delete CharacterAge;
	delete CharacterHealth;

}