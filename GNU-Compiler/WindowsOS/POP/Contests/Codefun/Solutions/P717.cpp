#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a,t = 1;
	cin >> n;
	//long int **a = new long int*[m];
	//for (long int i = 0; i < m; i++) a[i] = new long int[n];

	for (long int i = 0; i < n; i++)
		for (long int j = 0; j < n; j++) {
			cin >> a;
			if (i == j || i == (n - 1 - j)) t *= a;

		}
	cout << t;

	//for(int i = 0; i < m; i++) delete []a[i];
	//delete []a;
}