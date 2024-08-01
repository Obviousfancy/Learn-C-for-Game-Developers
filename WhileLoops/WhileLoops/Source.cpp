#include <iostream>

using namespace std;

void firstLoop();
void secondLoop();
void thirdLoop();
void fourLoop();

int main() 
{
	firstLoop();
	system("pause");
	
	secondLoop();
	system("pause");

	thirdLoop();
	system("pause");

	fourLoop();

}

void firstLoop() 
{
	float f_1 = 0.0;
	float f_2 = 1.0;

	while (f_2 > f_1)
	{


		f_1 += 0.01;
		cout << f_1 << endl;


	}
}

void secondLoop() 
{

	double d_1 = 0.10;
	double d_2 = 0.40;

	do 
	{
	
		d_1 += 0.1;
		cout << d_1 << endl;

	} while (d_1 < d_2);
	

}

void thirdLoop() 
{

	int a = 1;
	int b = 100;

	while (a <= 100) 
	{

		a++;
		cout << a << endl;
		if (a == 50)
			break;

	}


}

void fourLoop()
{

	int i = 0;
	int j = 0;

	do
	{

		i += 10;
		j = i * i;
		if (j > 1000)
		{

			continue;

		}
		cout << i << endl;
		cout << j << endl;

	} while (i <= 100);

	
}