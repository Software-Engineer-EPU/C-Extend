#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,b = 0,c = 0;
	cin >> n;
	long int **a = new long int*[n];
	for (int i = 0; i < n; i++) a[i] = new long int[n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] == 1) {
				b = i;
				c = j;
			}
		}
	for(int i = 0; i < n; i++) delete []a[i];
	delete []a;
	//cout << b << " " << c;
	long int d = n/2 + 1;
	cout << abs(b + 1 - n) + abs(c + 1 - n);
}