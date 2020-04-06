#include <bits/stdc++.h>
using namespace std;

bool Check_2(int a)
{
	if (a <= 1) return false;
	if ( a == 2) return true;
	for ( int j = 2; j <= (int)sqrt(a); j++){
		if (a%j == 0) return false;		
	}
	return true;
}


int main()
{
	int n,m,a[105];
	do cin >> n >> m; while (n <= 0 || m > 100);
	for ( int i = 0; i < m; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++) {
		if (Check_2(a[i]) == true && n%a[i] == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}