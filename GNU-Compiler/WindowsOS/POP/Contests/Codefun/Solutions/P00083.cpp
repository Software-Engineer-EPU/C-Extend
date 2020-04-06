#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	do cin >> n; while (n < 1 || n > 1000);
	//cin >> n;
	int sum = 0;
	long int *a = new long int;
	for (int i = 1; i <= n; i ++) {
		cin >> *(a+i);
		sum += i*(*(a+i));
	}
	cout << sum;
}