#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("E:/Code/C/Build-with-GNU/Test/input.txt","r",stdin);
	float m,x,y,w,h;
	cin >> m >> x >> y >> w >> h;
	long long min_x = floor (x / m);
	long long min_y = floor (y / m);

	long long max_x = ceil ((x + w) / m);
	long long max_y = ceil ((y + h) / m);

	cout << (max_x - min_x) * (max_y - min_y);
}