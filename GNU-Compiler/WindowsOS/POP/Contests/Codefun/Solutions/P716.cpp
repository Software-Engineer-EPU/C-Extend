#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int m,n,a,sum = 0;
	cin >> m >> n;
	//long int **a = new long int*[m];
	//for (long int i = 0; i < m; i++) a[i] = new long int[n];

	for (long int i = 0; i < m; i++)
		for (long int j = 0; j < n; j++) {
			cin >> a;
			if ((i + j) % 2 == 0) sum += a;

		}
	cout << sum;

	//for(int i = 0; i < m; i++) delete []a[i];
	//delete []a;
}