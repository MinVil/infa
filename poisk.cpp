#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int a, min, c = 1, n = 0, b = 0;
	while (b == 0)
	{
		cout << "������� �����" << endl;
		cin >> a;
		if (a == 0)
		{
			cout << "�� ������ ���� ����� 0"<<endl;
			n++;
		}
		else
		{
			min = a;
			while (a != 0)
			{
				cout << "������� �����" << endl;
				cin >> a;
				if (a != 0 && a < min)
				{
					min = a;
					c = 0;
				}
				if (a != 0 && a == min)
					c++;
			}
			cout << "���. ����� = " << min << endl << "���������� ���. ��������� = " << c << endl;
			n = 0;
		}
		if (n == 3)
		{
			cout << "��������� �����������" << endl;
			b = 1;
		}
	}
}