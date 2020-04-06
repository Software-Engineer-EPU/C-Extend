#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a,sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
	}
	cout << sum/n;
}