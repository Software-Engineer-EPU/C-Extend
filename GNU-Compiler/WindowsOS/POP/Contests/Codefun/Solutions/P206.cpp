//Kiểm tra số nguyên tố
//
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
	int a;
	cin >> a;
	if (Check(a) == true) cout << 1; else cout << 0;
	return 0;
}