#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a, max = -1000000001, vi_tri_max = 1;;
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> a;
		if (max < a) {
			max = a;
			vi_tri_max = i;
		}
	}
	cout << max << " " << vi_tri_max;

}