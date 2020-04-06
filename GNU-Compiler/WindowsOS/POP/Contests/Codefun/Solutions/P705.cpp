#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n, dem = 0;
	cin >> n;
	long int *a = new long int[n+5];
	for (long int i = 0; i < n; i ++) {
		cin >> a[i];
	}
	long int min = a[0];
	for (long int i = 1; i < n; i++)
		if (min > a[i]) min = a[i];

	for (long int i = 0; i < n; i++ )
		if (a[i] == min) dem++;
	cout << min << " " << dem;

	delete a;
	return 0;
}