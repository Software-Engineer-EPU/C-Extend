#include <bits/stdc++.h>
using namespace std;

int main()
{
	string c,s;
	fflush(stdin); getline(cin,c);

	for ( int i = 0; i < c.length(); i ++) {
		s+=c[i];
		cout  << s << endl;
	}

	for ( int i = c.length(); i >= 1; i --){
		cout << s << endl;
		s.pop_back();
	}
}