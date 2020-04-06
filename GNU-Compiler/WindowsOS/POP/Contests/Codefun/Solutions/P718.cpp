#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int m,n,max = -2147483648, dem = 0;
	cin >> m >> n;
	long int ** a = new long int *[m];
	for (int i = 0; i < m; i++) a[i] = new long int [n];

	for (long int i = 0; i < m; i++)
		for (long int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (max < a[i][j]) max = a[i][j];
		}
	for (long int i = 0; i < m; i++)
		for (long int j = 0; j < n; j++)
			if (max == a[i][j]) dem ++;
	cout << dem;
}