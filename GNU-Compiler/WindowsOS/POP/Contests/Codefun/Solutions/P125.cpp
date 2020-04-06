#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a,b,c;
	do cin >> a >> b >> c; while ( a < -1000 || a > 1000 || b < -1000 || b > 1000 || c < -1000 || c > 1000);
	float delta = b*b - 4*a*c;
	if (delta < 0) cout << "No Solution";
	else if (delta == 0) cout << -b/(2*a);
		else {
			float x = (float)(-b - (float)sqrt(delta))/(2*a);
			float y = (float)(-b + (float)sqrt(delta))/(2*a);
			if ( x < y) {
				if (x == (int)x) cout << (int)x; else printf("%.2f",x);
				cout << " ";
				if (y == (int)y) cout << (int)y; else printf("%.2f",y);
			}
			else {
				if (y == (int)y) cout << (int)y; else printf("%.2f",y);
				cout << " ";
				if (x == (int)x) cout << (int)x; else printf("%.2f",x);
			}
		}
			
}