#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a,s = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s *= a;
	}
	cout << s;
}