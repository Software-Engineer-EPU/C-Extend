#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> a;
		if (a > 0) sum += a;
	}
	cout << sum;

}