#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int t = 1;
	for (int i = a; i <= b; i++) t*= i;
	cout << t%c;
}
