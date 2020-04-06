#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, a, min = 1000000001;
	cin >> n;
	for (long long int i = 0; i < n; i++) {
		cin >> a;
		if (min > a) min = a;
	}
	cout << min;
}