#include <bits/stdc++.h>
using namespace std;

bool Check(long long int a)
{
	if ((float)sqrt(a) == (int)sqrt(a)) return true; else return false;
}

int main()
{
	long long int m;
	cin >> m;
	if (Check(m) == true)
	{
		cout << m;
		return 0;
	}
	if (Check(m/2) == true)
	{
		cout << m/2;
		return 0;
	}
	else
	{
		for (long long int i = sqrt(m); i >= 1; i--)
			if (m % (i*i) == 0)
				{
					cout << i * i;
					return 0;
				}
	}
}