#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
	double pk, pp, l;
	int n;
	cout << "pp = "; cin >> pp;
	cout << "pk = "; cin >> pk;
	cout << "n = "; cin >> n;
	double dp = (pk - pp) / n;
	double p = pp;
	while (p <= pk)
	{
		l = z(p * p) + 2 * z(2 * p + p * p);
		cout << p << " " << l << endl;
		p += dp;


		return 0;
	}
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (cos(2 * x) + 1) / (cos(x) + sin(x) * sin(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = 2 * x * x / (k * (1 + 2 * k));
			a *= R;
			S += a;
		} while (k < 4);
		return S;
	}
}
