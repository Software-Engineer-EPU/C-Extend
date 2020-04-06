#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("E:/Code/C/Build-with-GNU/Test/input.txt","r",stdin);
	long long n,m,k;
	cin >> n >> m >> k;
	long long *a = new long long [n];
	long long *b = new long long [m];
	for (long long i = 0; i < n; i++) cin >> a[i];
	for (long long j = 0; j < m; j++) cin >> b[j];
	int dem = 0;
	for (long long i = 0; i < n; i++)
		for (long long j = 0; j < m; j++)
			if (a[i]*b[j] == k) dem++;
	cout << dem;
}