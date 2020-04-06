#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, sum = 0,a;
	do cin >> n; while (n <= 0 || n >= 10000);
	for (int i = 0; i < n; i++) {
		do cin >> a; while (a <= -1000 || a >= 1000);
		sum += a;
		if (sum <= 0) {
			cout << "DEFEATED AT CITY " << i+1;
			return 0;
		}
	}
	cout << "VICTORY";
}