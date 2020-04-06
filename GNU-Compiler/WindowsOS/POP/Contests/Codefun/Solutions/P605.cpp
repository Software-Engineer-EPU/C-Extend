#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x,a, dem = 0;
	cin >> n >> x;
	for (long int i = 0; i < n; i++) {
		cin >> a;
		if (a >= x) dem++;
	}
	cout << dem;
}