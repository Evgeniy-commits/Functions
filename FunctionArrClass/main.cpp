#include<iostream>
using namespace std;
#define tab   "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);

template<typename T>
T MinValueIn(T arr[], const int n);

template<typename T>
T MaxValueIn(T arr[], const int n);

template<typename T>
void ShiftLeft(T arr[], const int n, int number_of_shifts);

template<typename T>
void ShiftRight(T arr[], const int n, int number_of_shifts);

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

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << "\n" << "\n";
}

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
}

template<typename T>
T Sum(T arr[], const int n)
{
	T Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>
T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		min > arr[i] ? min = arr[i] : 0;
	}
	return min;
}

template<typename T>
T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		max < arr[i] ? max = arr[i] : 0;
	}
	return max;
}

template<typename T>
void ShiftLeft(T arr[], const int n, int number_of_shifts)
{ 
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

template<typename T>
void ShiftRight(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		ShiftLeft(arr, n, n - number_of_shifts);
	}
}
