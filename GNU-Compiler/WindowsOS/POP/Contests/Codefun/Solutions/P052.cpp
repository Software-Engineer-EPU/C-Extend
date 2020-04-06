#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a,b;
	do cin >> a >> b; while ( a < 0 || a > 10000 || b < 0 || b > 10000);
	float p = (a+b)*2;
	float s = a*b;
	printf("%.2f %.2f\n",p,s );	
}