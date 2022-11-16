#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int h, i = 1, j = 1;

	cout << "¬ведите длину катетов: ";
	cin >> h;
	while (i <= h)
	{
		while (j <= h)
		{
			if (j <= h - i)
			{
				cout << "  ";
				j++;
			}
			else {
				cout << "* ";
				j++;
			}
		}
		cout << endl;
		i++;
		j = 1;
	}
}