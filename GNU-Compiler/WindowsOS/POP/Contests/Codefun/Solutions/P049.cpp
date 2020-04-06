#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d;
	do cin >> a >> b >> c >> d; while (a < -1000 || a > 1000 || b < -1000 || b > 1000 || c < -1000 || c > 1000 || d < -1000 || d > 1000 );
	double e = (a+b)+(b-c)+(c*d)+(d/a);
	printf("%.2lf\n", e);
}