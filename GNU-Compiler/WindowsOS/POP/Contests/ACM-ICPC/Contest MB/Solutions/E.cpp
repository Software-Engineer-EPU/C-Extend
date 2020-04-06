#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415926535898
#define dvc 2147483648

void b1()
{
	double a,b;
	cin >> a >> b;
	cout << -b/a << endl;
}

void b2()
{
	double a,b,c,delta,x1,x2;
	cin >> a >> b >> c;
	delta = b * b - 4 * a * c;

	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);

	if(x1 != (int)x1) x1 = dvc;
	if(x2 != (int)x2) x2 = dvc;
	if (x1 < x2) cout << x1; else cout << x2 << endl;

}


void b3()
{

	double a, b, c, d, delta, k, x1, x2, x3, x0;
	cin >> a >> b >> c >> d;

	delta = pow(b, 2) - 3 * a*c;
	k = (9 * a*b*c - 2 * pow(b, 3) - 27 * pow(a, 2)*d) / (2 * sqrt(pow(fabs(delta), 3)));
	if (delta > 0)
	{
		if (fabs(k) <= 1)
		{
			x1 = (2 * sqrt(delta)*cos(acos(k) / 3) - b) / (3 * a);
			x2 = (2 * sqrt(delta)*cos(acos(k) / 3 - (2 * PI / 3)) - b) / (3 * a);
			x3 = (2 * sqrt(delta)*cos(acos(k) / 3 + (2 * PI / 3)) - b) / (3 * a);

			if (x1 != (int)x1) x1 = dvc;
			if (x2 != (int)x2) x2 = dvc;
			if (x3 != (int)x3) x3 = dvc;

			double arr[5];
			arr[0] = x1;
			arr[1] = x2;
			arr[2] = x3;
			int min = arr[0];
			for (int i = 1; i < 3; i++)
				if (min > arr[i]) min = arr[i];

			cout << min << endl;
		}
		if (fabs(k) > 1)
		{
			x0 = ((sqrt(delta)*fabs(k)) / (3 * a*k))*(pow((fabs(k) + sqrt(pow(k, 2) - 1)), 1.0 / 3) + pow((fabs(k) - sqrt(pow(k, 2) - 1)), 1.0 / 3)) - (b / (3 * a));
			cout << x0 << endl;
		}
	}
	else if (delta == 0)
	{
		x0 = (-b - pow(-(pow(b, 3) - 27 * a*a*d), 1.0 / 3)) / (3 * a);
		cout << x0 << endl;
	}
	else
	{
		x0 = (sqrt(fabs(delta)) / (3 * a))*(pow((k + sqrt(k*k + 1)), 1.0 / 3) - pow(-(k - sqrt(k*k + 1)), 1.0 / 3)) - (b / (3 * a));
		cout << x0 << endl;
	}
}

int main()
{
	freopen("E:/Code/C/Build-with-GNU/Test/input.txt","r",stdin);

	int t,n;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		switch(n)
		{
			case 1: b1(); break;
			case 2: b2(); break;
			case 3: b3(); break;
		}
	}
}