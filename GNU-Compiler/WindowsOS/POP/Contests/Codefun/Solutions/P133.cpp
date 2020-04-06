#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a,b, dem = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b ;
		if ((b - a) >= 2) dem ++;
	}
	cout << dem;
}