#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float d1 = sqrt((x1 - x2)*(x1 - x2) + (y1 -y2) * (y1 -y2));
	float d2 = sqrt((x2 - x3)*(x2 - x3) + (y2 -y3) * (y2 -y3));
	float d3 = sqrt((x1 - x3)*(x1 - x3) + (y1 -y3) * (y1 -y3));

	if (d1 + d2 == d3) cout << 1; else cout << 0;
}