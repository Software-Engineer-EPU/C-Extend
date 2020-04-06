#include <bits/stdc++.h.>
using namespace std;

string s1 = "";
string s2 = "";
string s = "";
int n = 1;

bool _check()
{
	//if (strstr(s1,s) == NULL && strstr(s2,s) == NULL) return true;
	return false;
}

void _try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		s[i] = j;
		if (i == n)
			if (_check() == true)
			{
				cout << s;
				return;
			}
		else _try(i+1);
	}
}

int main()
{
	cin >> s1 >> s2;
	_try (1);
}