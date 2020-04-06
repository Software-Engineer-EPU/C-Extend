#include <bits/stdc++.h>
using namespace std;
long int _function(long int t)
{
	string s;
	while (1)
	{
		s = to_string(t);
		for (long int i = 0; i < s.length(); i++)
			if (s[i] != '4' && s[i] != '7')
			{
				t++;
				break;
			}
			else return t;
	}
	return t;
}
int main()
{
	long int l,r,sum = 0;
	long int a;
	cin >> l >> r;

	for (long int i = l; i <= r; i++) sum += _function(i);
	cout << sum;
}