#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a,b,c;
	do cin >> a >> b >> c; while ( a < 0 || a > 10 || b < 0 || b > 10 ||c < 0 || c > 10);
	if ((a + b + c) >= 15 && a >=4 && b >=4 && c>=4)
		if (a >=5 && b >=5 && c>=5) cout << "Excellent";
		else cout << "Medium";
	else cout << "Fail";
}