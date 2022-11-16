#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int h, i = 0, j = 1, k;

	cout << "¬ведите длину основани€ треугольника: ";
	cin >> h;
	if (h % 2 > 0)
	{
		while (i < h - h / 2)
		{
			while (j < h - h / 2 - i)
			{
				cout << "  ";
				j++;
			}
			for (k = 1; k <= i * 2 + 1; k++)
			{
				cout << "* ";
				j++;
			}
			cout << endl;
			i++;
			j = 1;
		}
	}
	else
	{
		while (i <= h / 2 - 1)
		{
			while (j < h / 2 - i)
			{
				cout << "  ";
				j++;
			}
			for (k = 1; k <= (i + 1) * 2; k++)
			{
				cout << "* ";
				j++;
			}
			cout << endl;
			i++;
			j = 1;
		}
	}
}