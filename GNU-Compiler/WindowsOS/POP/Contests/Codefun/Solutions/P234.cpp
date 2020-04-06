#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	//do cin >> m >> n; while (m < 0 || m > 100 || n < 0 || n > 100 || m > n);
	cin >> m >> n;
	for (int i = 1; i <= n; i++)	
		if (i%m == 0) cout << i << endl;
}