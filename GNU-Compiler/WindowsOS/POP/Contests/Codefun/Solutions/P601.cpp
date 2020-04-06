#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	long double a, sum = 0, dem = 0;
	cin >> n;
	for (long long int i = 0; i < n; i++) {
		cin >> a;
		if (a >= 0 ) {
			sum += a;
			dem ++;
		}
	}
	double b = (float) sum / dem;
	printf("%.2lf", b);

}