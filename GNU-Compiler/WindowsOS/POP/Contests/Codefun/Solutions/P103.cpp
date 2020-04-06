#include <bits/stdc++.h>
using namespace std;

int main()
{
	// a1x + b1y =c1
	// a2x + b2y =c2
	double a1,b1,c1,a2,b2,c2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	if ((c1*a2-c2*a1) == 0) cout << "Inf";
		else if ((b1*a2-b2*a1) == 0) cout << "0";
				else {
					double y = (c1*a2-c2*a1)/(b1*a2-b2*a1);
					double x = (c1 - b1*(c1*a2-c2*a1)/(b1*a2-b2*a1))/a1;
					printf("%.1f %.1f\n",x,y );
				}
}