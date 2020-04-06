#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	char c;
	cin >> m >> n >> c;
	for ( int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << c;
		cout << endl;
	}
}