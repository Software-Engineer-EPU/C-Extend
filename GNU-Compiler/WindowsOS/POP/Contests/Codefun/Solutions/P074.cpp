#include <bits/stdc++.h>
using namespace std;

bool Check(int a)
{
	if ((float)sqrt(a) == (int)sqrt(a)) return true; else return false;
}

int main()
{
	long long int n;
	int dem = 0;
	do cin >> n; while (n < 1 || n > 1000000000);
	for ( int i = 1; i <= n; i++) {
		if (Check(i) == true) dem ++;
	}
	cout << dem;
}