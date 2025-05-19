#include<iostream>
using namespace std;
#define tab   "\t"
#define TYPE_INT
#define TYPE_DOUBLE
#define TYPE_FLOAT
#define TYPE_CHAR

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);

void CopyArr(int arr[], int arrBuffer[], const int n);
void CopyArr(double arr[], double arrBuffer[], const int n);
void CopyArr(float arr[], float arrBuffer[], const int n);
void CopyArr(char arr[], char arrBuffer[], const int n);

void PasteArr(int arr[], int arrBuffer[], const int n);
void PasteArr(double arr[], double arrBuffer[], const int n);
void PasteArr(float arr[], float arrBuffer[], const int n);
void PasteArr(char arr[], char arrBuffer[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);

void ArrInt(char arr[], double arrInt[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);

int Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
float MinValueIn(float arr[], const int n);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
float MaxValueIn(float arr[], const int n);

void ShiftLeft(int arr[], const int n);
void ShiftLeft(double arr[], const int n);
void ShiftLeft(float arr[], const int n);
void ShiftLeft(char arr[], const int n);

void ShiftRight(int arr[], const int n);
void ShiftRight(double arr[], const int n);
void ShiftRight(float arr[], const int n);
void ShiftRight(char arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
#ifdef TYPE_INT
	const int n = 5;
	int arrBuffer[n];
	int arr[n];

	FillRand(arr, n);
	CopyArr(arr, arrBuffer, n);
	cout << "\t ИСХОДНЫЙ МАССИВ\n\n";
	Print(arr, n);
	Sort(arr, n);
	cout << "\t СОРТИРОВАННЫЙ МАССИВ\n\n";
	Print(arr, n);
	PasteArr(arr, arrBuffer, n);
	cout << "\t ЦИКЛИЧЕСКИЙ СДВИГ ВЛЕВО\n\n";
	Print(arr, n);
	ShiftLeft(arr, n);
	Print(arr, n);
	PasteArr(arr, arrBuffer, n);
	cout << "\t ЦИКЛИЧЕСКИЙ СДВИГ ВПРАВО\n\n";
	Print(arr, n);
	ShiftRight(arr, n);
	Print(arr, n);
	PasteArr(arr, arrBuffer, n);
	cout << "\t РАБОТА С ИСХОДНЫМ МАССИВОМ\n\n";
	Print(arr, n);
	cout << "Сумма элементов массива равна " << Sum(arr, n) << "\n\n";
	cout << "Среднее арифметическое элементов массива равно " << Avg(arr, n) << "\n\n";
	cout << "Минимальное значеие равно: " << MinValueIn(arr, n) << "\n\n";
	cout << "Максимальное значеие равно: " << MaxValueIn(arr, n) << "\n\n";
#endif // TYPE_INT

#ifdef TYPE_DOUBLE
	const int td = 8;
	double brrBuffer[td];
	double brr[td];

	FillRand(brr, td);
	CopyArr(brr, brrBuffer, td);
	cout << "\t ИСХОДНЫЙ МАССИВ\n\n";
	Print(brr, td);
	Sort(brr, td);
	cout << "\t СОРТИРОВАННЫЙ МАССИВ\n\n";
	Print(brr, td);
	PasteArr(brr, brrBuffer, td);
	cout << "\t ЦИКЛИЧЕСКИЙ СДВИГ ВЛЕВО\n\n";
	Print(brr, td);
	ShiftLeft(brr, td);
	Print(brr, td);
	PasteArr(brr, brrBuffer, td);
	cout << "\t ЦИКЛИЧЕСКИЙ СДВИГ ВПРАВО\n\n";
	Print(brr, td);
	ShiftRight(brr, td);
	Print(brr, td);
	PasteArr(brr, brrBuffer, td);
	cout << "\t РАБОТА С ИСХОДНЫМ МАССИВОМ\n\n";
	Print(brr, td);
	cout << "Сумма элементов массива равна " << Sum(brr, td) << "\n\n";
	cout << "Среднее арифметическое элементов массива равно " << Avg(brr, td) << "\n\n";
	cout << "Минимальное значеие равно: " << MinValueIn(brr, td) << "\n\n";
	cout << "Максимальное значеие равно: " << MaxValueIn(brr, td) << "\n\n";
#endif // TYPE_DOUBLE

#ifdef TYPE_FLOAT
	const int tf = 10;
	float crrBuffer[tf];
	float crr[tf];

	FillRand(crr, tf);
	CopyArr(crr, crrBuffer, tf);
	cout << "\t ИСХОДНЫЙ МАССИВ\n\n";
	Print(crr, tf);
	Sort(crr, tf);
	cout << "\t СОРТИРОВАННЫЙ МАССИВ\n\n";
	Print(crr, tf);
	PasteArr(crr, crrBuffer, tf);
	cout << "\t ЦИКЛИЧЕСКИЙ СДВИГ ВЛЕВО\n\n";
	Print(crr, tf);
	ShiftLeft(crr, tf);
	Print(crr, tf);
	PasteArr(crr, crrBuffer, tf);
	cout << "\t ЦИКЛИЧЕСКИЙ СДВИГ ВПРАВО\n\n";
	Print(crr, tf);
	ShiftRight(crr, tf);
	Print(crr, tf);
	PasteArr(crr, crrBuffer, tf);
	cout << "\t РАБОТА С ИСХОДНЫМ МАССИВОМ\n\n";
	Print(crr, tf);
	cout << "Сумма элементов массива равна " << Sum(crr, tf) << "\n\n";
	cout << "Среднее арифметическое элементов массива равно " << Avg(crr, tf) << "\n\n";
	cout << "Минимальное значеие равно: " << MinValueIn(crr, tf) << "\n\n";
	cout << "Максимальное значеие равно: " << MaxValueIn(crr, tf) << "\n\n";
#endif // TYPE_FLOAT

#ifdef TYPE_CHAR
	const int tc = 5;
	char drrBuffer[tc];
	char drr[tc];
	double arrInt[tc];
	
	FillRand(drr, tc);
	CopyArr(drr, drrBuffer, tc);
	cout << "\t ИСХОДНЫЙ МАССИВ\n\n";
	Print(drr, tc);
	Sort(drr, tc);
	cout << "\t СОРТИРОВАННЫЙ МАССИВ\n\n";
	Print(drr, tc);
	PasteArr(drr, drrBuffer, tc);
	cout << "\t ЦИКЛИЧЕСКИЙ СДВИГ ВЛЕВО\n\n";
	Print(drr, tc);
	ShiftLeft(drr, tc);
	Print(drr, tc);
	PasteArr(drr, drrBuffer, tc);
	cout << "\t ЦИКЛИЧЕСКИЙ СДВИГ ВПРАВО\n\n";
	Print(drr, tc);
	ShiftRight(drr, tc);
	Print(drr, tc);
	PasteArr(drr, drrBuffer, tc);
	cout << "\t РАБОТА С ИСХОДНЫМ МАССИВОМ\n\n";
	Print(drr, tc);
	ArrInt(drr, arrInt, tc);
	cout << "Сумма элементов массива равна " << Sum(arrInt, tc) << "\n\n";
	cout << "Среднее арифметическое элементов массива равно " << Avg(arrInt, tc) << "\n\n";
	cout << "Минимальное значеие равно: " << MinValueIn(arrInt, tc) << "\n\n";
	cout << "Максимальное значеие равно: " << MaxValueIn(arrInt, tc) << "\n\n";
#endif // TYPE_CHAR
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
void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}


void CopyArr(int arr[], int arrBuffer[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arrBuffer[i] = arr[i];
	}
}
void CopyArr(double arr[], double arrBuffer[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arrBuffer[i] = arr[i];
	}
}
void CopyArr(float arr[], float arrBuffer[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arrBuffer[i] = arr[i];
	}
}
void CopyArr(char arr[], char arrBuffer[], const int n)
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
void PasteArr(double arr[], double arrBuffer[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = arrBuffer[i];
	}
}
void PasteArr(float arr[], float arrBuffer[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = arrBuffer[i];
	}
}
void PasteArr(char arr[], char arrBuffer[], const int n)
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
	cout << "\n" << "\n";
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << "\n" << "\n";
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << (int)arr[i] << tab;
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
void Sort(float arr[], const int n)
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
void Sort(char arr[], const int n)
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

void ArrInt(char arr[], double arrInt[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arrInt[i] = (int)arr[i];
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
float Sum(float arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}

int Avg(int arr[], const int n)
{
	double Avg = Sum(arr, n) / n;
	return Avg;
}
double Avg(double arr[], const int n)
{
	double Avg = Sum(arr, n) / n;
	return Avg;
}
float Avg(float arr[], const int n)
{
	double Avg = Sum(arr, n) / n;
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
double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		min > arr[i] ? min = arr[i] : 0;
	}
	return min;
}
float MinValueIn(float arr[], const int n)
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
float MaxValueIn(float arr[], const int n)
{
	double max = arr[0];
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
void ShiftLeft(double arr[], const int n)
{
	double buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = buffer;
}
void ShiftLeft(float arr[], const int n)
{
	double buffer = arr[0];
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = buffer;
}
void ShiftLeft(char arr[], const int n)
{
	double buffer = arr[0];
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
void ShiftRight(double arr[], const int n)
{
	double buffer = arr[n - 1];
	for (int i = n - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = buffer;
}
void ShiftRight(float arr[], const int n)
{
	double buffer = arr[n - 1];
	for (int i = n - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = buffer;
}
void ShiftRight(char arr[], const int n)
{
	double buffer = arr[n - 1];
	for (int i = n - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = buffer;
}
