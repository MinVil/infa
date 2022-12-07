#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int a, min, c = 1, n = 0, b = 0;
	while (b == 0)
	{
		cout << "Введите число" << endl;
		cin >> a;
		if (a == 0)
		{
			cout << "не должен быть равен 0"<<endl;
			n++;
		}
		else
		{
			min = a;
			while (a != 0)
			{
				cout << "Введите число" << endl;
				cin >> a;
				if (a != 0 && a < min)
				{
					min = a;
					c = 0;
				}
				if (a != 0 && a == min)
					c++;
			}
			cout << "Мин. число = " << min << endl << "Количество мин. элементов = " << c << endl;
			n = 0;
		}
		if (n == 3)
		{
			cout << "Программа остановлена" << endl;
			b = 1;
		}
	}
}