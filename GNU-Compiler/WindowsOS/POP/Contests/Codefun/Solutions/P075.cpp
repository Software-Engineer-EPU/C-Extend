#include <bits/stdc++.h>
using namespace std;

bool Check_2(int a)
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
	long long int n;
	int dem = 0;
	do cin >> n; while (n < 1 || n > 1000000000);
	for ( int i = 1; i <= n; i++) {
		if (Check_2(i) == true) dem ++;
	}
	cout << dem;
}