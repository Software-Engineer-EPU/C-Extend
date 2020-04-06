#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	int c = __gcd(a,b);
	cout << a/c << b/c;
}