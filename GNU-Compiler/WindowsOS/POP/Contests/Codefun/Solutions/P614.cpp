#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n, dem = 1,a,b,max = 1; cin >> n;
	cin >> a;
	for (int i = 1; i < n; i++) {
		cin >> b;
		if (a == b)	dem++;
		else {
			if (max < dem) max = dem;
			dem = 1;
			a = b;
		}
	}
	if (max < dem) max = dem;
	cout << max;
}