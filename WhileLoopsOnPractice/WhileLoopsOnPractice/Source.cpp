#include <iostream>

using namespace std;

int main()
{

	/*int MyInt(0);

	int count = 0;
	while (count <= 10) {

		cout << count << " time: " << MyInt << endl;
		MyInt++;
		count++;

	}*/

	double Numpi = 3.14156;
	double NumberEuler = 2.718281828;

	int count = 0;

	bool Condition = true;
	
	do
	{

		cout << "The number pi is:" << Numpi << endl;
		cout << "The number E is:" << NumberEuler << endl;

		cout << "Count:" << count << endl;


		cout << "Pi + E*count:" << Numpi + NumberEuler * count << endl;

		count++;

		if (count <= 100)
		{

			Condition = true;

		}
		else
		{

			Condition = false;

		}

	} while (Condition);

	while (Condition)
	{

		cout << "The number pi is:" << Numpi << endl;
		cout << "The number E is:" << NumberEuler << endl;

		cout << "Count:" << count << endl;


		cout << "Pi + E*count:" << Numpi + NumberEuler * count << endl;

		count++;

		if (count >= 100)
		{

			Condition = false;

		}
		

		//system("pause");


	}

}