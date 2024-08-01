#include <iostream>

using namespace std;

///Another way to define a function is the next in this lines
void welcome();

char getYesNo();

void printResponse(char responseToPrint);

void AskYesOrNoQuestion();


int main()
{
	//Asks user to enter y or n and then returns the response
	//AskYesOrNoQuestion();
	int i = 3;
	cout << --i << endl;
	cout << i << endl;
	system("pause");

}


void welcome()
{
	//Welcome the user to this program
	cout << "Welcome" << endl;

}

char getYesNo() 
{
	//Ask the user yes or no?
	cout << "Please answer: y or n. \n";

	//We declare a variable to store the response
	char response;
	//We get the input from the user via keyboard
	cin >> response;

	return response;

}

void printResponse(char responseToPrint)
{
	//print the response to the screen
	cout << "Your answer was: " << responseToPrint << endl;


}

void AskYesOrNoQuestion()
{

	//Greet the user 
	welcome();
	
	//Create char variable and store the result  from getYesNo()
	char answer = getYesNo();//getYesNo() gets a y or n from the user
	printResponse(answer);//Return the response showing this to the user on the screen

}