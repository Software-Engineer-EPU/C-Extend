#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int m,n,max = -2147483648,sum,k,i,j;
	cin >> m >> n;
	long int ** a = new long int *[m];
	for (i = 0; i < m; i++) a[i] = new long int [n];


	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];


	for (j = 0; j < n; j++) {
		sum = 0;
		for (i = 0; i < m; i++) sum += a[i][j];
		if (max < sum) {
			max = sum;
			k = j;
		}
	}
	cout << sum << " " << k + 1;

}