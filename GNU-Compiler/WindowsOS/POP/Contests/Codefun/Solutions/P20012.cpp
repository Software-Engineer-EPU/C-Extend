#include <bits/stdc++.h>
using namespace std;

bool Check(int a)
{
	if ( a == 2) return true;
	for ( int i = 2; i <= (int)sqrt(a); i++){
		if (a%i == 0) return false;		
	}
	return true;
}

int main()
{
	long long int n,dem = 0;
	cin >> n;
	for ( int i = 2; i < n; i++){
		if (Check(i) == true) dem++;
	}
	cout << dem;
}