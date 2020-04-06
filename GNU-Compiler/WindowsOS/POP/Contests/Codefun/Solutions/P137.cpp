#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[6];
	for ( int i = 0; i < 5; i++)
		cin >> a[i];
	int max = a[0];
	for ( int i = 1; i < 5; i++)
		if ( max < a[i]) max = a[i];
	cout << max;
}