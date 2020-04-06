#include <bits/stdc++.h>
using namespace std;

int main ()
{
	long long int n;
	//long long int gt = 1;
	do cin >> n; while (n < 1 || n > 1000000000);
	/*
	for (int j = 1; j <= n; j++) {
		gt *= j;
	}

	if ( n <= 4) cout << 0;
	else if ( n > 4 && n <= 9) cout << 1;
			else {
					long long int i = 10; int dem = 0;
					while ( gt % i == 0) {
						i *= 10;
						dem ++;
					}
					cout << dem;
			}

	*/
	cout << n/5;
}