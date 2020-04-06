#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, a, max = -1000000001;
	cin >> n;
	for (long long int i = 0; i < n; i++) {
		cin >> a;
		if (max < a) max = a;
	}
	cout << max;
}