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
	int x;
	cin >> x;
	for ( int i = 2; i < x; i++ )
		if (Check_2(i) ==  true) cout << i << " ";
	return 0;

}