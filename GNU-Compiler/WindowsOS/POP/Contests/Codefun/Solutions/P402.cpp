#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	fflush(stdin); getline(cin,s);
	int dem = 0;
	bool bl = false;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') bl = true;
		else {
			bl = false;
			break;
		}
	}
	if (bl == true) {
		cout << 0;
		return 0;
	}

	for (int i = 0; i < s.length(); i++)
		if (s[i] == ' ') s[i] = '-';
		else break;

	//cout << s;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == ' ' && s[i+1] != ' ') dem++;
	cout << dem + 1;
}