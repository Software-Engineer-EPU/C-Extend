#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, n;
	do cin >> m >> n; while (m <= 0 || n <= 0);
	for (int i = 0; i < m; i++){
		for ( int j = 0; j < n; j++)
			cout << "#";
		cout << endl;
	}

}