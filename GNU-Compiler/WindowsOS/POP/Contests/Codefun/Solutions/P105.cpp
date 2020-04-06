#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	do cin >> n; while (n < 0  || n > 1000000);
	if (n%4 == 0) cout << 1; else cout << 0;
}