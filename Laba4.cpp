#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int const SIZE = 100;
	int arr[SIZE];
	int i, j;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand();
	}
	cout << "Массив"<<endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i]<<" ";
	}
	for (int i = 0; i < SIZE; i = i + 3)
	{
		arr[i] = 0;
	}
	for (i = 0; i < SIZE; i = i + 3)
	{
		for (j = i; j < SIZE - i - 2; j++);
		{
			arr[j] = arr[j + 1];
		}
		arr[SIZE - 1] = 0;
	}
	cout << endl;
	cout << "Массив" << endl;
	for (i = 1; i < SIZE; i++)
	{
		if (arr[i] < 0)
		{
			for (j = i; j < SIZE - i - 3; j++);
			{
				arr[j + 2] = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = arr[j - 1] + 1;
			}
		}
		cout << arr[i] << " ";
	}
}