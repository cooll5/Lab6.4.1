#include <iostream>
#include <iomanip>
#include <time.h>
#include "windows.h"
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
}

int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int Find(int* a, const int size, const int x)
{
	for (int i = size - 1; i <= 0; i--)
		if (a[i] > 0 || a[i] < 0)
			return i;
	return -1;
}

int Sum(int* a, const int size, const int x)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] > 0 || a[i] < 0 && !(a[i]))
			S += a[i];
	return S;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 5;
	int a[n];

	int Low;
	cout << "Low = "; cin >> Low;
	int High;
	cout << "High = "; cin >> High;

	Create(a, n, Low, High);
	Max(a, n);
	Find(a, n, 0);
	Print(a, n);
	Sum(a, n, 0);

	cout << " Максимальний елемент " << Max(a, n) << endl;
	cout << " Суму елементів " << Sum(a, n, 0) << endl;
	return 0;
}