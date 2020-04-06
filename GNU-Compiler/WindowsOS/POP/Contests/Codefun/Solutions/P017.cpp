#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if (a <= 0 || b <= 0 || c <= 0) {
		cout << "NO";
		return 0;
	}
	if ((a+b >= c) && (b+c >= a) && (c+a >= b)) cout << "YES"; else cout << "NO";
}