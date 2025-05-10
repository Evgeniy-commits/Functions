#include<iostream>
using namespace std;

//#define FACT
#define DEGREE

long long Fact(int a)
{
	long long res = 1;
	for (int i = 2; i <= a; i++)
	{
		res *= i;
	}
	return res;
}

double Power(double a, int n)
{
	double res = 1;
	for (int i = n; i > 0; i--)
	{
		res *= a;
	}
	return res;
}

void main()
{
	setlocale(LC_ALL, "");

#ifdef FACT
	int a;
	cout << "Введдите число: "; cin >> a;
	if (a < 0) cout << "Число должно быть положительное";
	else if (a == 0 || a == 1) cout << "Факториал числа " << a << " = " << 1;
	else cout << "Факториал числа " << a << " = " << Fact(a) << endl;
#endif // FACT

#ifdef DEGREE
	double a;
	int n;
	cout << "Введдите основание степени: "; cin >> a;
	cout << "Введдите показатель степени: "; cin >> n;
	if (n < 0) 
	{ 
		n = -n;
		cout << "Число " << a << "^" << n << " = " << 1 / Power(a, n); 
	}
	else if (n > 0) cout << "Число " << a << "^" << n << " = " << Power(a, n);
	else cout << "Число " << a << "^" << n << " = " << 1; 
	
#endif // DEGREE

}
