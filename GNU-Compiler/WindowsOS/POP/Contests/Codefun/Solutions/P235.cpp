#include <bits/stdc++.h>
using namespace std;
int main()
{
	float n,a;
	cin >> n;
	float sum = 0;
	for ( int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
	}
	printf("%.2f\n", sum/n );
}