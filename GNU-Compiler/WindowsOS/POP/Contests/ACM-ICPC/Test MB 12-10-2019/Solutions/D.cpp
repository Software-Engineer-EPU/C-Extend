#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("E:/Code/C/Build-with-GNU/Test/input.txt","r",stdin);
	int w;
	do cin >> w; while (w < 1 || w > 10000);
	int p,q,n;
	for (int index = 0; index < w; index++)
	{
		cin >> p >> q >> n;
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += (p - i)%q;
		}
		cout << sum << endl;
	}
}