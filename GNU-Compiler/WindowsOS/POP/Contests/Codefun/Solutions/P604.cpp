#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, max = -1000000001;
	cin >> n;
	long long int *a = new long long int[n];
	
	for (long long int i = 0; i < n; i++) cin >> *(a+i);
	for (long long int i = 0; i < n - 1; i++) {
		long long int b = *(a+i) - *(a+i+1);
		//cout << abs(b) << endl;
		if (max < abs(b)) max = abs(b);
	}
	cout << max;
}