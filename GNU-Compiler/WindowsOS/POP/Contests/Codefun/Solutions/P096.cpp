#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	int max,min;
	cin >> m >> n;

	int**a = new int*[m];
	for(int i = 0; i < m; i++) a[i] = new int[n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	/*	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout  << a[i][j] << " ";
		cout << endl;
	}
	*/

		// Min hàng
		// Max cột
	max = a[0][0];	
	for (int i = 1; i < m; i++)
		if (max < a[i][0]) max = a[i][0];
	}

	for (int j = 0; j < n; j++) {
		
}