#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	do cin >> n >> m; while (n < 0 || n > 100 || m < 0 || m > 100);
	int d[1005];
	string s[250];

	for (int i = 0; i < n; i++) {
		//cin >> d[i] >> s[i];
		cin >> d[i];
		getline(cin,s[i]);
		for (int j = 0; j < s[i].length(); j++) {
			s[i][j] = s[i][j+1];
		}
	}


	int x;
	bool bl;
	for (int i = 0; i < m; i++) {
		bl = false;
		cin >> x;
		for (int j = 0; j < n; j++)
			if (d[j] == x) {
				bl = true;
				cout << s[j] << endl;
				break;
			}
		if (bl == false) cout << "Not found" << endl;
	}	
}