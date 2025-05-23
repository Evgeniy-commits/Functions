#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"

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
