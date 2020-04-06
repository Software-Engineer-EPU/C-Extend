#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	fflush(stdin);
	getline(cin,s);
	int a = 0,b = 0, c = 0, d = 0;
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] == 'a') a++;
			else if (s[i] == 'b') b++;
				else if (s[i] == 'c') c++;
					else d++;
	}
	cout << a << endl << b << endl << c << endl << d;
}