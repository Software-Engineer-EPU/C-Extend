#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,gt = 1;
	do cin >> n; while ( n > 10);
	for ( int i = 1; i <= n; i++)
		gt*=i;
	cout << gt;
}