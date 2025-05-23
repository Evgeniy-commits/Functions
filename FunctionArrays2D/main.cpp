//#include<iostream>
//using namespace std;
//
//void randomArr2D(int arr[], const int Height, const int Wight);
//
////void randomArr2D(double arr2D, int ROWS, int COLS, int minRand = 0, int maxRand = 100);
//
////void printArr2D(int arr2D, int ROWS, int COLS);
////void printArr2D(double arr2D, const int ROWS, const int COLS);
//
//
//void main()
//{
//	setlocale(LC_ALL, "");
//	const int ROWS = 5;
//	const int COLS = 8;
//	int arr2D[ROWS][COLS];
//	
//	randomArr2D(arr2D, ROWS, COLS);
//	//printArr2D(arr2D, ROWS, COLS);
//	
//
//	//double arr2D[ROWS][COLS];
//
//	//randomArr2D(arr2D, ROWS, COLS);
//	//printArr2D(arr2D[ROWS][COLS]);
//}
//
//void randomArr2D(int arr[], const int Height, const int Wight)
//{
//	for (int i = 0; i < Height * Wight; i++)
//		arr[i] = rand() % 100;
//}
//void printArr2D(int arr[], int arr2D[ROWS][COLS], const int Height, const int Wight)
//{
//	for (int i = 0; i < Height; i++)
//	{
//		int k = 0;
//		for (int j = 0; j < Wight; j++)
//		{
//			arr2D[i][j] = arr[k];
//			cout << arr[i][j] << "/t";
//			k++;
//		}
//		cout << endl;
//	}
//}
////void randomArr2D(double arr2D, int ROWS, int COLS)
////{
////
////	for (int i = 0; i < ROWS; i++)
////		for (int j = 0; j < COLS; j++)
////			arr2D[i][j] = rand() % 100;
////}
////
//
////void sortArr2D(int Arr2D[ROWS][COLS])
////{
////	for (int i = 0; i < ROWS; i++)
////	{
////		for (int j = 0; j < COLS; j++)
////		{
////			for (int k = i; k < ROWS; k++)
////			{
////				for (int l = k > i ? 0 : j + 1; l < COLS; l++)
////				{
////					if (Arr2D[k][l] < Arr2D[i][j])
////						Arr2D[k][l] ^= Arr2D[i][j] ^= Arr2D[k][l] ^= Arr2D[i][j];
////				}
////			}
////		}
////	}
////}

#include <iostream>
#include <cmath>
 
using namespace std;
using namespace std::vector;


void FullArr(int arr[][], const int Height, const int Wight)
{
 
    for (int i = 0; i < Wight; i++)
    {
        for (int j = 0; j < Height; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
}
 
void PrintArr(int arr[][], const int Height, const int Wight)
{
    for (int i = 0; i < Wight; i++)
    {
        for (int j = 0; j < Height; j++)
        {
            cout <<arr[i] [j];
        }
        cout << '\n';
    }
}
 
 
 
void main()
{
    const int Rows = 5, Cols = 5;
 
        int mass[Rows][Cols];
        FullArr(mass, Rows,Cols);
        PrintArr(mass, Rows, Cols);
    system("pause");
}