#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a, tich = 1;
	do cin >> n; while (n < 1 || n > 100);
	for (int i = 0; i < n; i++) {
		cin >> a;
		tich *= a;
	}
	string s = to_string(tich);
	//cout << s;
	cout << s[s.length() - 1];
		
}