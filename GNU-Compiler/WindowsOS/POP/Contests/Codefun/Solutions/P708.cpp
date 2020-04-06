#include <bits/stdc++.h>
using namespace std;

bool Check(int a)
{
	if (a <= 1) return false;
	if ( a == 2) return true;
	for ( int i = 2; i <= (int)sqrt(a) + 1; i++){
		if (a%i == 0) return false;		
	}
	return true;
}

int main()
{
	long int n,sl = 0; cin >> n;
	long int* a = new long int[n];

	for (long int i = 0; i < n; i++) {
		cin >> a[i];
		if (Check(a[i]) == true) sl ++;
	}
	cout << sl << endl;
	for (long int i = 0; i < n; i++) {
		if (Check(a[i]) == true) cout << a[i] << endl;
	}
	
}