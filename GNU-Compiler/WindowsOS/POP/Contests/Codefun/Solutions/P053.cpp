#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a;
	//do cin >> a; while (a < 0 || a > 10000);
	cin >> a;
	float b = (float)sqrt((a*a)+(a*a));
	printf("%.2f",b);
}