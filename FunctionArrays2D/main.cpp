#include<iostream>
using namespace std;

#define tab "\t"
const int Height = 5;
const int Wight = 8;

void randomArr2D(int arr2D[][Wight], const int Height, const int Wight);
void randomArr2D(double Arr2D[][ptr], const int HeightD, const int ptr, int minRand, int maxRand);

void printArr2D(int arr2D[][Wight], const int Height, const int Wight);
void printArr2D(double Arr2D[][ptr], const int HeightD, const int ptr);


void main()
{
	setlocale(LC_ALL, "");
	
	int arr2D[Height][Wight];
	
	randomArr2D(arr2D, Height, Wight);
	printArr2D(arr2D, Height, Wight);
	
	const int HeightD = 6;
	const int WightD = 7;
	int const* const ptr = &WightD;
	double Arr2D[HeightD][ptr];
	
	randomArr2D(Arr2D, HeightD, ptr);
	printArr2D(Arr2D, HeightD, ptr);
}

void randomArr2D(int arr2D[][Wight], const int Height, const int Wight)
{
	
	for (int i = 0; i < Height; i++)
		for (int j = 0; j < Wight; j++)
		{
			arr2D[i][j] = rand() % 100;
		}
}
void printArr2D(int arr2D[][Wight], const int Height, const int Wight)
{
	for (int i = 0; i < Height; i++)
	{
		for (int j = 0; j < Wight; j++)
		{
			cout << arr2D[i][j] << tab;
		}
		cout << endl;
	}
}
void randomArr2D(double Arr2D[][ptr], const int HeightD, const int ptr, int minRand, int maxRand)
{

	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < HeightD; i++)
	{
		for (int j = 0; j < ptr; j++)
		{
			Arr2D[i][j] = rand() % (maxRand - minRand) + minRand;
			Arr2D[i][j] /= 100;
		}
	}
}

void printArr2D(double Arr2D[][ptr], const int HeightD, const int ptr)
{
	for (int i = 0; i < Height; i++)
	{
		for (int j = 0; j < ptr; j++)
		{
			cout << Arr2D[i][j] << tab;
		}
		cout << endl;
	}
}

//void sortArr2D(int Arr2D[ROWS][COLS])
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			for (int k = i; k < ROWS; k++)
//			{
//				for (int l = k > i ? 0 : j + 1; l < COLS; l++)
//				{
//					if (Arr2D[k][l] < Arr2D[i][j])
//						Arr2D[k][l] ^= Arr2D[i][j] ^= Arr2D[k][l] ^= Arr2D[i][j];
//				}
//			}
//		}
//	}
//}
