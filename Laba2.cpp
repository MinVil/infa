#include <iostream> //��������� ��������������, ������� ���������� ����(���������� ����� � ������)
using namespace std;


int main()
{	
	setlocale(LC_ALL, "ru");
	
	int sum = 0;
	for (int i = 21; i < 100; i += 3)sum += i;
	{

		

		cout << "����� ����� ����� " << sum << endl;
	}

}