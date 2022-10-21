#include <iostream>

using namespace std;


int main()
{
	double	e = 0.0001, a = 0.1, b = 0.8;
	int		k = 10, n = 10, i1, i2, i3;
	double	h = (b - a) / k, x, sn, S1, S2, f;
	for (i1 = 0; i1 <= k; i1++)
	{
		x = a + i1 * h;
		f = x * atan(x) - log(sqrt(1 + x * x));

		for (S1 = 0, i2 = 1; i2 <= n; i2++)
		{

			S1 += pow(-1, i2 + 1) * pow(x, 2 * i2) / (2 * i2 * (2 * (i2 - 1)));
		}
		for (S2 = 0, sn = 1, i3 = 1; fabs(sn) >= e; i3++)
		{

			sn = pow(-1, i2 + 1) * pow(x, 2 * i2) / (2 * i2 * (2 * (i2 -1 )));
			S2 += sn;
		}
		printf("x=%.2f SN=%f SE=%f Y=%f\n", x, S1, S2, f);
		cout << endl;
	}
}