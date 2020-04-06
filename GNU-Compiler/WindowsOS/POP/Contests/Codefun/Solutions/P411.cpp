#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	fflush(stdin); getline(cin,s);
	string x = "";
	string p[20];
	int j = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') x += s[i];
		else {
			p[j] = x;
			j++;
			x = "";
		}
	}
	p[j] = x;
	for (int i = j; i >= 0; i--) cout << p[i] << " ";	
}