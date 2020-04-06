#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	for (int i = n/2+1; i >=1; i--) {
		if (n%i == 0) {
			if (n/i < i) cout << n/i << " " << i; else cout << i << " " << n/i;
			return 0;
		}
	}
}