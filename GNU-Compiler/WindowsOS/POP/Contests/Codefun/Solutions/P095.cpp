#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum = 0,k;
	do cin >> n; while (n < 0);
	for (int i = 1; i < n; i++) {
		for(int j = i; j < n; j++) {
			sum += j;
			if (sum == n) {
				k = j;
				break;
			}
		}
		if(sum == n) {
			for (int j = i; j <= k; j++) cout << j << " ";
			return 0;
		}
		else sum = 0;
	}
}