#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a,k; 
	cin >> n >> k;
	for (long int i = 0; i < n; i++) {
		cin >> a;
		if (a%k == 0) cout << a << " ";
	}
}