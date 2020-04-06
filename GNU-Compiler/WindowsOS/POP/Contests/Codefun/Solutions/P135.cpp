#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	//do cin >> a >> b >> c; while (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100);
	cin >> a >> b >> c;
	if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b)) cout << "yes"; else cout << "no";
}