#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	do cin >> n; while ( n < 1 || n > 1000000);
	long long int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) sum += i;
	}
	cout << sum;
}