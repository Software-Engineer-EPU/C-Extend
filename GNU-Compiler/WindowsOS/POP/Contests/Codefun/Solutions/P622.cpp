#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin >> n;
	long int *a = new long int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n%2 == 0) cout << a[n/2 - 1]; else cout << a[(n-1)/2 - 1];
	return 0;
}