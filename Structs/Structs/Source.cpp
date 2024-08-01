#include <iostream>
#include <string>

using namespace std;


struct LocationVector 
{
	float X;
	float Y;
	float Z;

};

struct Player 
{

	int Level = 0;
	float Health = 100;
	float Damage = 20;
	float Stamina = 100;

	LocationVector Location = {0.f,0.f,0.f};



	void TakeDamage(float dmg)
	{
	
		Health -= dmg;
	
	}

	int GetLevel() 
	{
	
		if (Level > 10) 
		{
		
			cout << "Level is greater than 10!! \n";

		}
		return Level;

	}

	void DisplayLocation() 
	{
	
		cout << "Location.x = " << Location.X << endl;
		cout << "Location.y = " << Location.Y << endl;
		cout << "Location.z = " << Location.Z << endl;
	
	}
};


int main()
{
	Player p_1;
	p_1.Level = 11;
	p_1.Health = 100.f;
	p_1.Damage = 10.f;
	p_1.Stamina = 20.f;

	cout << "p_1 Level = " << p_1.GetLevel() << endl;
 
	p_1.TakeDamage(40.f);

	cout << "p_1 takes  " << 40.f << " damage!!" << endl;

	cout << "p_1 Health = " << p_1.Health << endl;
	
	p_1.DisplayLocation();

	

	///Inicializando otra struct en este caso de player 2
	Player p2 = { 1,50.f,40.f,35.34f,{6.f,6.f,6.f} };

	p2.DisplayLocation();
}