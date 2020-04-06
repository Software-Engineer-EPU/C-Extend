#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n, sum = 0; cin >> n;
	int **a = new int*[n];
	for (int i = 0; i < n; i++) a[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (i%2 == 0 || j%2 == 0) sum += a[i][j];
		}
	for(int i = 0; i < n; i++) delete []a[i];
	delete []a;
	cout << sum;
}