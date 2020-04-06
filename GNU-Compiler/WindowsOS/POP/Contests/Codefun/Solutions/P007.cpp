#include <bits/stdc++.h>
using namespace std;

int main()
{
	float a,b;
	do cin >> a >> b; while (a > 1000 || b > 1000);
	cout << a + b + a*b;
}