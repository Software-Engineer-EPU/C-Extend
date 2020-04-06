#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin >> n;
	long int* a = new long int[n];

	for (long int i = 0; i < n; i++) cin >> a[i];
	for (long int i = n - 1; i >= 0; i--) cout << a[i] << " ";
}