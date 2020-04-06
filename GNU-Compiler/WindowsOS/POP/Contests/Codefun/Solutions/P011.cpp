#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a,b,c;
	do cin >> a >> b >> c; while ( a > 100 || b > 100 || c > 100);
	float p = (a + b +c)/2;
	cout << sqrt(p*(p-a)*(p-b)*(p-c));
}