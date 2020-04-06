#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	cin >> n;
	long int * a = new long int [n];
	for ( long int i = 0; i < n; i++) cin >> *(a+i);
	long int min = *(a), vt_min = 0;
	for (long int i = 1; i < n; i++) {
		if (min > *(a+i)) {
			min = *(a+i);
			vt_min = i;
		}
	}
	cout << vt_min -1;
}