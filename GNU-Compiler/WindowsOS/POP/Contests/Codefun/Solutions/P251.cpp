#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin >> m >> n;
	char **a = new char*[m];
	for(int i = 0; i < m; i++) a[i] = new char[n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	char c[100];
	int sl = 0, k = 0;;
	for (int i = 1; i < m; i++)
		for (int j = 1; j < n; j++) {
			if ((a[i][j] == a[i-1][j]) && (a[i][j] == a[i+1][j])  && (a[i][j] == a[i][j-1])  && (a[i][j] == a[i][j+1])) {
				c[k] = a[i][j];
				k++;
			}
		}
	
	int j;
	for (int i = 0; i < k - 1; i++) {
		for ( j = 0; j < k - 1; j++)
			if (c[i] == c[j]) sl++;
		cout << c[j] << " " << sl;
	}
	for(int i = 0; i < m; i++) delete []a[i];
	delete []a;
	
}