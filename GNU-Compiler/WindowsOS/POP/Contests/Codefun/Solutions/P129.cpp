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
	int n;
	//do cin >> n; while (n < 0 || n > 1000);
	cin >> n;
	if (Check_2(n) == true) {
		cout << "Good";
		string s = to_string(n);
		cout << endl << s.length();
	}
	else cout << "Bad";
}
