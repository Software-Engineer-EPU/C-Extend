#include <bits/stdc++.h>
using namespace std;

bool Check(int a)
{
	if (a <= 1) return false;
	if ( a == 2) return true;
	for ( int i = 2; i <= (int)sqrt(a); i++){
		if (a%i == 0) return false;		
	}
	return true;
}

int main()
{
	int n;
	do cin >> n; while ( n < 1 || n > 100);
	int *a = (int *)calloc(n,sizeof(int));
	for (int i = 0; i < n; i++) {
		cin >> *(a+i);
	}
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (Check(*(a+i)) == true) dem ++;
	}

	cout << dem;
}