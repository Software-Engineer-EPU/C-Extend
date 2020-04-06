#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	do cin >> n; while (n < 1 || n > 80000);
	int x,y,z;
	z = n%60;
	int temp = n/60;
	y = temp%60;
	x = temp/60;
	if (x < 10)
		if (y < 10) 
			if (z < 10) cout << "0" << x << ":" << "0" << y << ":" << "0" << z;
			else cout << "0" << x << ":" << "0" << y << ":" << z;
		else {
			if (z < 10) cout << "0" << x << ":" << y << ":" << "0" << z;
			else cout << "0" << x << ":" << y << ":" << z;
		}
	else {
		if (y < 10) 
			if (z < 10) cout << x << ":" << "0" << y << ":" << "0" << z;
			else cout << x << ":" << "0" << y << ":" << z;
		else {
			if (z < 10) cout << x << ":" << y << ":" << "0" << z;
			else cout << x << ":" << y << ":" << z;
		}

	}
}