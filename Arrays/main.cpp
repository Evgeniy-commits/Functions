#include<iostream>
using namespace std;
#define tab   "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void CopyArr(int arr[], int arrF[], const int n);

void PasteArr(int arr[], int arrF[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);

int Avg(int arr[], const int n);

int MinValueIn(int arr[], const int n);

int MaxValueIn(int arr[], const int n);

void ShiftLeft(int arr[], const int n);

void ShiftRight(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arrBuffer[n];
	int arr[n];

	FillRand(arr, n);
	CopyArr(arr, arrBuffer, n);
	cout << "\t ÈÑÕÎÄÍÛÉ ÌÀÑÑÈÂ\n\n";
	Print(arr, n);
	Sort(arr, n);
	cout << "\t ÑÎÐÒÈÐÎÂÀÍÍÛÉ ÌÀÑÑÈÂ\n\n";
	Print(arr, n);
	PasteArr(arr, arrBuffer, n);
	cout << "\t ÖÈÊËÈ×ÅÑÊÈÉ ÑÄÂÈÃ ÂËÅÂÎ\n\n";
	Print(arr, n);
	ShiftLeft(arr, n);
	Print(arr, n);
	PasteArr(arr, arrBuffer, n);
	cout << "\t ÖÈÊËÈ×ÅÑÊÈÉ ÑÄÂÈÃ ÂÏÐÀÂÎ\n\n";
	Print(arr, n);
	ShiftRight(arr, n);
	Print(arr, n);
	PasteArr(arr, arrBuffer, n);
	cout << "\t ÐÀÁÎÒÀ Ñ ÈÑÕÎÄÍÛÌ ÌÀÑÑÈÂÎÌ\n\n";
	Print(arr, n);
	cout << "Ñóììà ýëåìåíòîâ ìàññèâà ðàâíà " << Sum(arr, n) << "\n\n";
	cout << "Ñðåäíåå àðèôìåòè÷åñêîå ýëåìåíòîâ ìàññèâà ðàâíî " << Avg(arr, n) << "\n\n";
	cout << "Ìèíèìàëüíîå çíà÷åèå ðàâíî: " << MinValueIn(arr, n) << "\n\n";
	cout << "Ìàêñèìàëüíîå çíà÷åèå ðàâíî: " << MaxValueIn(arr, n) << "\n\n";

	const int SIZE = 8;
	double brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
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

void CopyArr(int arr[], int arrBuffer[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arrBuffer[i] = arr[i];
	}
}

void PasteArr(int arr[], int arrBuffer[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = arrBuffer[i];
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
	cout << endl;
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

int Avg(int arr[], const int n)
{
	int Avg = Sum(arr, n) / n;
	return Avg;
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

int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		max < arr[i] ? max = arr[i] : 0;
	}
	return max;
}

void ShiftLeft(int arr[], const int n)
{
	int buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = buffer;
}

void ShiftRight(int arr[], const int n)
{
	int buffer = arr[n - 1];
	for (int i = n - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = buffer;
}
