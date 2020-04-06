#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin >> n;
	string a[50];
	a[1] = 'A'; a[2] = 'B';
	if (n == 1) {
		cout << "A";
		return 0;
	}

	if (n == 2) {
		cout << "B";
		return 0;
	}
	for (i = 3; i <= n; i++) {
		a[i] = a[i-1] + a[i-2];
		//cout << "OP: " << *(a+i) << endl;
	}
	cout << a[n];
}