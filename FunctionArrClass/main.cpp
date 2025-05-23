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
	cout << "\t �������� ������\n\n";
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� ������� ����� " << Sum(arr, n) << "\n\n";	
	cout << "������� �������������� ��������� ������� ����� " << Avg(arr, n) << "\n\n";
	cout << "����������� ������� �����: " << MinValueIn(arr, n) << "\n\n";
	cout << "������������ ������� �����: " << MaxValueIn(arr, n) << "\n\n";
	cout << "������� ����� ������� �����: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	const int td = 8;
	double brr[td];

	FillRand(brr, td);
	cout << "\t �������� ������\n\n";
	Print(brr, td);
	Sort(brr, td);
	Print(brr, td);
	cout << "����� ��������� ������� ����� " << Sum(brr, td) << "\n\n";
	cout << "������� �������������� ��������� ������� ����� " << Avg(brr, td) << "\n\n";
	cout << "����������� ������� �����: " << MinValueIn(brr, td) << "\n\n";
	cout << "������������ ������� �����: " << MaxValueIn(brr, td) << "\n\n";
	cout << "������� ����� �������: "; cin >> number_of_shifts;
	ShiftLeft(brr, td, number_of_shifts);
	Print(brr, td);
	Sort(brr, td);
	Print(brr, td);
	ShiftRight(brr, td, number_of_shifts);
	Print(brr, td);
}
