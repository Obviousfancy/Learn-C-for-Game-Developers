#include <iostream>
#include <string>

using namespace std;

enum PlayerStatus 
{

	PS_Crouched,					///This equals to value 0 of information like an index
	PS_Standing,					///This equals to value 1 of index
	PS_Running,						///This equals to value 2 of index
	PS_Walking						///This equals to value 3 of index

};



int main() 
{
	PlayerStatus status;
	status = PS_Crouched;

	status = PlayerStatus::PS_Running;

	if (status == PS_Crouched)
	{

		cout << "The player is crouching \n";

	}

	


}