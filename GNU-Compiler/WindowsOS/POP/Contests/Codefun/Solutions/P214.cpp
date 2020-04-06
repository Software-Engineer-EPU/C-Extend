#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    return a * b / __gcd(a,b);
}

int main()
{
	// Tìm BCNN của input
	int a[6],c = 1;
	for (int i = 0; i < 5; i++) cin >> a[i];
	for (int i = 0; i < 5; i++) {
		c = lcm(c,a[i]);
	}
	cout << c;
}