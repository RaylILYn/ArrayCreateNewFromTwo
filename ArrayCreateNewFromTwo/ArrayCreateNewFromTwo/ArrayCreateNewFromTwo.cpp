#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	const int SIZE = 100;
	int x[SIZE], y[SIZE], z[SIZE];
	int n, m, j = 0, sum = 0, max = x[0];
	cout << "Введите размер 1-го массива (макс.100): ";
	cin >> n;
	cout << endl << "Введите элементы 1-го массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	cout << endl;
	cout << "Введите размер 2-го массива (макс.100): ";
	cin >> m;
	cout << endl << "Введите элементы 2-го массива: " << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> y[i];
	}
	cout << endl;
	for (int i = 1; i < n; i += 2)
	{
		if (x[i] < 0)
		{
			z[j] = x[i];
			j++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (max < x[i])
		{
			max = x[i];
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (y[i] < max)
		{
			z[j] = y[i];
			j++;
		}
	}
	if (j == 0)
	{
		cout << "Нет подходящих чисел для создания нового массива" << endl;
		return;
	}
	cout << "Новый сформированный массив: " << endl;
	for (int i = 0; i < j; i++)
	{
		cout << z[i] << " ";
	}
	cout << endl << endl;
	system("pause");
}