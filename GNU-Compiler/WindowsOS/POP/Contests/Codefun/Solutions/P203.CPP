#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	long long int* a = (long long int*) calloc (n,sizeof(long long int));
	for (int i = 0; i < n; i++) 
		cin >> *(a+i);
	long long int x;
	cin >> x;
	if (x >= *a && x <= *(a+n-1)) cout << 1;
	else cout << 0;

	delete a;
	return 0;
}