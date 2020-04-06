#include <bits/stdc++.h>
using namespace std;

int tt(int n, int k)
{
	int a = pow((k-1),n) + (k-1)*(pow(-1,n));
	return a%6971;
}
int main()
{
	int t;
	cin >> t;
	int n, k;
	for (int i = 0; i < t; i++) {
		cin >> n >> k;
		cout << tt (n,k) << endl;
	}
	//((k-1)^n + (k-1)(-1)^n) mod 6971
}