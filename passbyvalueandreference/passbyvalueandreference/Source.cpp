#include <iostream>
#include <string>

using namespace std;

void ChangeStr(string& str);


int main() 
{
	///String whithout const
	string myStr = "Druid";

	ChangeStr(myStr);

	cout << myStr << endl;

}

void ChangeStr(string& str) 
{

	str += "!";
}

