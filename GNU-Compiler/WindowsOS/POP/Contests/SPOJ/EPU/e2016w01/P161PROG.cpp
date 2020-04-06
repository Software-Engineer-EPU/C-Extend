#include <bits/stdc++.h>
using namespace std;

bool Check(long int a)
{
	if ((float)sqrt(a) == (long int)sqrt(a)) return true; else return false;
}


bool _function(long int i)
{
	for (long int j = 2; j <= i; j++)
	{
		if (i%j == 0)
			if (Check(j) == false) 
			{
				cout << i;
				return true;
			}
		else break;
	}
	return false;
}


int main()
{
	//freopen("E:/Code/C/Build-with-GNU/Test/input.txt","r",stdin);
	long int n;
	do cin >> n; while (n < 1);
	for (long int i = n; i >= 2; i--)
	{
		if (n%i == 0)
			if (_function(i) == true) return 0;
	}
}