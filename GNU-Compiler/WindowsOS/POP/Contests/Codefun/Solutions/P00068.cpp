#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long int n,gt = 1;
	do cin >> n; while (n < 1 || n > 1000000000);
	for (int i = 1; i <= n; i++) {
		gt *= i;
	}
	//cout << gt << endl;
	long long int i = 10;
	while ( gt % i == 0) {
		i *= 10;
	}
	long long int a = gt / (i/10);
	//cout << a << endl;
	cout << a%10;
}