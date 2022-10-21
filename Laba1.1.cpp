#include<iostream>
using namespace std;





void main()
{
	float a = 1000, b = 0.0001, c, d, e, s, g, h, k, t, z;
	double a1 = 1000,b1=0.0001,c1,d1,e1,s1,g1,h1,k1,t1,z1;
	d = (a + b) * (a + b) * (a + b);
	e = a * a * a;
	s = d - e;
	g = 3 * a * b * b;
	h = b * b * b;
	k = 3 * a * a * b;
	t = g + h + k;
	c = s / t;
	d1 = (a1 + b1) * (a1 + b1) * (a1 + b1);
	e1 = a1 * a1 * a1;
	s1 = d1 - e1;
	g1 = 3 * a1 * b1 * b1;
	h1 = b1 * b1 * b1;
	k1 = 3 * a1 * a1 * b1;
	t1 = g1 + h1 + k1;
	c1 = s1 / t1;
	cout << c << endl;
	cout << c1 << endl;

}