#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	if (n < 10) {
		cout << n;
		return 0;
	}
	int sum = 0;
	while (n/10 != 0) {
		sum += n%10;
		n /= 10;
	}
	cout << sum + n;
}