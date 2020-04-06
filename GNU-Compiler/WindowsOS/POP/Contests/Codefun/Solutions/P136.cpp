#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	//do cin >> n; while ( n < 0 || n > 100000);
	cin >> n;
	if ((float)sqrt(n) == (int)sqrt(n)) cout << 1; else cout << 0;
}