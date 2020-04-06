#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,k,s = 0;
	cin >> n >> k;
	for (long long int i = 1; i <= n; i++) s += n*(n+k);
	cout << s;
}