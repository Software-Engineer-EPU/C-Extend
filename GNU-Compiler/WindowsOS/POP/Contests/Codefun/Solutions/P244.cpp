#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum = 0;
	int *arr = new int;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> *(arr+i);
		if (*(arr+i) < 0) {
			cout << sum;
			delete arr;
			return 0;
		}
		sum += *(arr+i);
	}
	cout << sum;
	delete arr;
	return 0;
}