#include <iostream>

using namespace std;

class Item 
{

public:
	Item() 
	{
	
		cout << "An item has been created" << endl;

	
	}

	~Item() 
	{
	
		cout << "An item has been destroyed " << endl;

	}

};


class Critter
{
public:

	static int CritterCount;
	Critter();
	~Critter();

	static void AnnounceCount() 
	{
	
		cout << CritterCount << endl;
	
	}

};

int Critter::CritterCount = 0;


Critter::Critter()
{
	cout << "A critter is born \n";
	++CritterCount;
}

Critter::~Critter()
{
}

int main() 
{
	/* {

		static Item item;    

	}
	*/
	Critter crit;
	Critter::AnnounceCount();
	Critter crit2;
	Critter::AnnounceCount();

	Critter* crit3 = new Critter;
	delete crit3;


	system("pause");

	
}