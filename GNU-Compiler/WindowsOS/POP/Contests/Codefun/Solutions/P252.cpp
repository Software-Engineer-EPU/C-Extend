#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	float t = (float) m/100;
	float a = n*pow((1+t),k);
	printf("%.0f",a - 1 );
}