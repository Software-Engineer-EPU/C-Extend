#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, gt = 1;
	do cin >> n; while (n <= 0 || n > 15);
	for (int i = 1; i <= n; i++) gt *= i;
	cout << gt;
	return 0;

}