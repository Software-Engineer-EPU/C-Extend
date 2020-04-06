#include <bits/stdc++.h>
using namespace std;

int main()
{
	 int a,b;
	 //do cin >> a >> b; while ( a < 1 || a > 10000 || b < 1 || b > 10000);
	 cin >> a >> b;
	 string c = to_string(a) + to_string(b);
	 for ( int i = c.length()-1; i >= 0; i--)
	 	cout << c[i];
	 return 0;
}