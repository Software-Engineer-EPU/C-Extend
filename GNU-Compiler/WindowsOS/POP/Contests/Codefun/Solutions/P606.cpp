#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	cin >> n;
	long int *a = new long int[n];
	for (long int i = 0; i < n; i++) cin >> *(a+i);
	for (long int i = 0; i < n/2+1; i++)
			if (*(a+i) != *(a+n-i-1)) {
				cout << "NO";
				return 0;
			}
	cout << "YES";
}