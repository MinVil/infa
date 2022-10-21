#include <iostream>
#include<ctime>
using namespace std;

void main()
{
	const int ROW = 5;
	const int COL = 8;
	
	int arr[ROW][COL],s;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 10;

		}
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << "\t";

		}
		cout << endl;
	}
	cin >> s;
	s = s - 1;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (i == s)
				arr[s][j] = 0;

		}
	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
			cout << arr[i][j] << '\t';
		
	}
	cout << endl;
}