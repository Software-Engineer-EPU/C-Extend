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
	int a,b;
	cin >> a >> b;
	if(Check(__gcd(a,b)) == true) cout << "yes"; else cout << "no";
}