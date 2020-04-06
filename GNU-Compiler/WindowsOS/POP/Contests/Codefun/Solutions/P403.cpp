#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	fflush(stdin); getline(cin,s);
	int n, dem = 0;
	cin >> n;
	char a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 0; j < s.length(); j++) {
			if (a == s[j]) dem++;
		}
		cout << dem << endl;
		dem = 0;
	}
}