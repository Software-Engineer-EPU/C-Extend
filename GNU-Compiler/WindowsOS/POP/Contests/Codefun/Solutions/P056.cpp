#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	do cin >> n; while (n < 1 || n > 1000000000);
	long long int m = n/3;
	if (3*m == n) cout << "YES"; else cout << "NO";
}