#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b;
	cin >> n;
	for ( int i = 1; i <= n; i++){
		cin >> a >> b;
		cout << __gcd(a,b) << endl;;
	}
}