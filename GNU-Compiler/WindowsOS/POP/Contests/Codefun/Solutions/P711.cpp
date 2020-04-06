#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,m,x,y,sum;
	cin >> n >> m;
	long int* a = new long int[n];
	for (long int i = 1; i <= n; i++) cin >> a[i];
	for (long int i = 0; i < m; i++) {
		sum = 0;
		cin >> x >> y;
		for (long int j = x; j <= y; j++) sum += a[j];
		cout << sum;
	}

}