#include<iostream>
using namespace std;
#define tab   "\t"

void main()
{
	setlocale(LC_ALL, "");

	const int tc = 12;
	char drrBuffer[tc];
	char drr[tc];
	int minRand = 0;
	int maxRand = 100;

for (int i = 0; i < tc; i++)
	{
		drr[i] = rand() % (maxRand - minRand) + minRand;
	}

for (int i = 0; i < tc; i++)
	{   
		//int ch = drr[i];
		cout << (int)drr[i] << tab;
	}
	cout << endl;
	int Sum = 0;
	for (int i = 0; i < tc; i++)
	{
		Sum += (int)drr[i];
	}
	cout << Sum << tab;
}