#include <bits/stdc++.h>
using namespace std;

int main()
{
	string c;
	fflush(stdin);
	//do getline(cin,c); while (c.length() < 20);
	getline(cin,c);
	cout << (char)toupper(c[4]) << " " << (char)toupper(c[8]);
}