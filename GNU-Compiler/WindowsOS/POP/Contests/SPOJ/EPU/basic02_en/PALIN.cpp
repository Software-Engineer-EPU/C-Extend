#include <bits/stdc++.h>
using namespace std;

bool Check(long long int a)
{
	string s = to_string(a);
	for (long long int i = 0; i < (s.length() / 2); i++)
		if (s[i] != s[s.length() - 1 - i]) return false;
	return true;
}

int main()
{
	//freopen("input.txt", "r", stdin);
	long long int t,n;
	//cin >> t;
	do cin >> t; while (t < 1);
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		while(1)
		{
			if (Check(n) == true) {
				cout << n << endl;
				break;
			}
			n++;
		}

	}

}