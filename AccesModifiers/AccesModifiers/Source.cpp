#include <iostream>
#include <string>

using namespace std;

 class Creature 
{

public:
	
	Creature();

	void SetName(string name);
	string GetName();

	float GetHealth();


	void TakeDamage(float Damage);

private:

	string Name;
	float Health;

protected:

	int NumberOfLimbs;

};

class Goblin : public Creature 
{

public:
	
	Goblin();
	int GetNumberOfLimbs();

};

int main() 
{

	Creature Igor;
	Igor.SetName("Igor");
	
	cout << "Name: " << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;

	Igor.TakeDamage(15.0);


	Goblin gobby;
	cout << gobby.GetName() << endl;
	cout << gobby.GetNumberOfLimbs() << endl;
	

	

}



///
Creature::Creature()
{
	
	Health = 100;
	cout << "A creature has been created!!! \n";

}

void Creature::TakeDamage(float damage)
{

	float Total;
	Total = Health - damage;

	if (Total <= 0) 
	{
	
		cout << GetName() << "has died \n";

	}
	else 
	{

		Health -= damage;

	}

	cout << "Health: " << Health << endl;

}

///Setters and Getters
///Setter para la variable privada Name
void Creature::SetName(string name) 
{

	Name = name;

}

///Getter para la variable privada Name
string Creature::GetName()
{

	return Name;

}


///Setter para 
float Creature::GetHealth() 
{

	return Health;

}


Goblin::Goblin() 
{

	NumberOfLimbs = 5;
	SetName("Gobby");

}

int Goblin::GetNumberOfLimbs() 
{

	return NumberOfLimbs;

}