#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	cin >> n;
	//long int *a = new long int [n];
	//
	long int a,b;
	cin >> a;
	for (int i = 1; i < n; i++) {
		cin >> b;
		if (a < b) a = b;
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";

}