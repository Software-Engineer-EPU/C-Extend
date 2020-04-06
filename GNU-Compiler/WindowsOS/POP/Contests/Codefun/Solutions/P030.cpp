#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	do cin >> n; while (n < 3);
	long long int a = n*(n-1)*(n-2)/6;
	printf("%ld\n",a );
}