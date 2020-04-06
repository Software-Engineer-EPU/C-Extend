#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int x,y;
	do cin >> x >> y; while (x < 0 || y < 0 || x > 1000000000 || y > 1000000000);
	cout << pow(x,y);
}