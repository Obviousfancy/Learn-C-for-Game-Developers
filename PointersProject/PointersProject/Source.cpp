#include <iostream>
#include <string>

using namespace std;


struct Character 
{

	Character();
	void PrintHealth() 
	{
	
		cout << "Health = " << Health << endl;

	}


	string Name;
	float Health;


};

Character::Character() 
{

	Name = "Default Name";
	Health = 100.0;

}

int main() 
{

	for (int i = 0; i < 10; i++) 
	{
		
		Character* PtrToChar = new Character();
	
		//PtrToChar->Name = "Neo";
		cout << PtrToChar->Name << endl;

		PtrToChar->PrintHealth();

		delete PtrToChar;

		

	}
	

	//cout << PtrToChar->Name << endl;
	//cout << PtrToChar->Health << endl;



}