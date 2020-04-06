#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	do cin >> n; while (n < 0);
	cout << n+1;
	/*
	int* a = (int*) calloc(n, sizeof(int));
	*a = 1; *(a+1) = 2;
	if (n < 3) cout << a[n];
	for ( int i = 2; i < n; i++)
		*(a+i) = 2*(*(a+i-1))-*(a+i-2);
	cout << *(a+n-1);
	*/
}