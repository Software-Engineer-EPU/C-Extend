#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin >> a >> b;
	float c = (float) a/b;
	int d = (int)c;
	c -= d;
	string s = to_string(c);
	//cout << s << endl;
	//puts(s);
	cout << s[72];

}