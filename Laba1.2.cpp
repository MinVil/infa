#include <iostream>
using namespace std;
int main()
{
    long double a;
    long double b;
    long double c;
    double n;
    double m;


    cin >> n;
    cin >> m;

    a = n++ * m;
    cout << a;
    cout << "\n";

    b = n++ < m;
    cout << b;
    cout << "\n";

    c = m-- > m;
    cout << c;
    cout << "\n";

}