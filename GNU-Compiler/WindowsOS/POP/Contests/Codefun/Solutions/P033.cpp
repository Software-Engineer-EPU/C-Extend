#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	do cin >> n >> k; while (n < 0 || k < 0);
	for (int r = 1; r < k; r++) {
		float q = (float)(n - r)/k;
		if ( (int)q == (float)q && q > 0) {
			cout << q + r;
		}
	}
}