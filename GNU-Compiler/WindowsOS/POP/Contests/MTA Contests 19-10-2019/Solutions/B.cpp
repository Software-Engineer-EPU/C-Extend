/*
Code by KingNNT
*/
#include <bits/stdc++.h>
using namespace std;
#define pathio "E:/Code/C/Build-with-GNU/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout


void _func()
{
	int n,k;
	cin >> n >> k;
	int *a = new int[n+5];
	for (int i = 1; i <= n; i++) cin >> a[i];
	int sum = 0;
	int loop = n/(5*k);
	//cout << loop << endl;
	for (int i = 1; i <= loop * 5; i++)
	{
		if (i%2 == 1) sum += i * a[i];
		else sum -= i * a[i];
	}
	cout << sum << endl;
}
int main()
{
	freopen(fi);
	freopen(fo);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		_func();
	}
}