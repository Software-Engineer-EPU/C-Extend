#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,x;
	int i = 0;
	fflush(stdin); getline (cin ,s);

	while (s[i]) {
    	x += (tolower(s[i]));
    	i++;
  	}

  	bool bl;
	for (char c = 'a'; c <= 'z'; c++) {
		bl = false;
		for (i = 0; i < x.length(); i++)
			if (c == x[i]) {
				bl = true;
				break;
			}
			else bl = false;

			if (bl == false) {
				cout << "NO";
				return 0;
			}
	}
	cout << "YES";
}