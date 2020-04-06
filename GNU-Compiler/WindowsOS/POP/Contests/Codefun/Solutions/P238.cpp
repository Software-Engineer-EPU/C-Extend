#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cout << m/a << endl;
		m -= (m/a)*a;
	}

}