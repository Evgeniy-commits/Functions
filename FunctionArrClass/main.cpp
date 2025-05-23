#include<iostream>
using namespace std;
#define tab   "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);

void ShiftLeft(int arr[], const int n, int number_of_shifts);
void ShiftLeft(double arr[], const int n, int number_of_shifts);

void ShiftRight(int arr[], const int n, int number_of_shifts);
void ShiftRight(double arr[], const int n, int number_of_shifts);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int number_of_shifts;

	FillRand(arr, n);
	cout << "\t ИСХОДНЫЙ МАССИВ\n\n";
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива равна " << Sum(arr, n) << "\n\n";	
	cout << "Среднее арифметическое элементов массива равно " << Avg(arr, n) << "\n\n";
	cout << "Минимальное значеие равно: " << MinValueIn(arr, n) << "\n\n";
	cout << "Максимальное значеие равно: " << MaxValueIn(arr, n) << "\n\n";
	cout << "Введите число сдвигов влево: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	const int td = 8;
	double brr[td];

	FillRand(brr, td);
	cout << "\t ИСХОДНЫЙ МАССИВ\n\n";
	Print(brr, td);
	Sort(brr, td);
	Print(brr, td);
	cout << "Сумма элементов массива равна " << Sum(brr, td) << "\n\n";
	cout << "Среднее арифметическое элементов массива равно " << Avg(brr, td) << "\n\n";
	cout << "Минимальное значеие равно: " << MinValueIn(brr, td) << "\n\n";
	cout << "Максимальное значеие равно: " << MaxValueIn(brr, td) << "\n\n";
	cout << "Введите число сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(brr, td, number_of_shifts);
	Print(brr, td);
	Sort(brr, td);
	Print(brr, td);
	ShiftRight(brr, td, number_of_shifts);
	Print(brr, td);
}



void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << "\n" << "\n";
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << "\n" << "\n";
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
				arr[j] ^= arr[i] ^= arr[j] ^= arr[i];
		}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
}

int Sum(int arr[], const int n)
{
	int Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
double Sum(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}

int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		min > arr[i] ? min = arr[i] : 0;
	}
	return min;
}
double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		min > arr[i] ? min = arr[i] : 0;
	}
	return min;
}

int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		max < arr[i] ? max = arr[i] : 0;
	}
	return max;
}
double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		max < arr[i] ? max = arr[i] : 0;
	}
	return max;
}

void ShiftLeft(int arr[], const int n, int number_of_shifts)
{ 
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftRight(int arr[], const int n, int const number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftRight(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}