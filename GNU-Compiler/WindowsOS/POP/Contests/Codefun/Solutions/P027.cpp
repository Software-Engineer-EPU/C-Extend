#include <bits/stdc++.h>
using namespace std;

void Check(int a)
{
	if ( a == 2) {
		cout << "YES";
		return;
	}
	for ( int i = 2; i <= sqrt(a); i++){
		if (a%i == 0) {
			cout << i;
			return;
		}
	}
	cout << "YES";
}
int main()
{
	int a;
	cin >> a;
	Check(a);
}