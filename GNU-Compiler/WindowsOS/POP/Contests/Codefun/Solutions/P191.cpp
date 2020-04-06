#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a,b,c;
	cin >> a >> b >> c;

	if (a == 0)
		if (b == 0)
			if (c == 0) cout << "inf";
			else cout << 0;
		else cout << 1;
	else {
		float delta = b*b-4*a*c;
		if ( delta < 0) cout << 0;
		else if (delta == 0) cout << 1;
			else cout << 2;
	}
}