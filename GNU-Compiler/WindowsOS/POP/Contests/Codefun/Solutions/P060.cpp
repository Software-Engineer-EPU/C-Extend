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
	long int n;
	cin >> n;
	for (long int i = n; i >=2; i-- )
		if (Check(i) == true) {
			cout << i;
			return 0;
		}
}