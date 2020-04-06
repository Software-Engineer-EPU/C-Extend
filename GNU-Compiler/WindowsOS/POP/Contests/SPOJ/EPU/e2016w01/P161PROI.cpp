#include <bits/stdc++.h>
using namespace std;

bool Check(int a, int b, int c, int d, int e, int f)
{
	int d1 = sqrt((a - c)*(a - c) +(b - d)*(b - d));
	int d2 = sqrt((c - e)*(c - e) +(d - f)*(d - f));
	int d3 = sqrt((a - e)*(a - e) +(b - f)*(b - f));

	int max = d1;
	if (max < d2) max = d2;
	else if (max < d3) max = d3;

	if (max = d1)
	{
		if (d1 != d2 + d3 && d2 == d3) return true;
		else return false;
	}

	if (max = d2)
	{
		if (d2 != d1 + d3 && d1 == d3) return true;
		else return false;
	}

	if (max = d3)
	{
		if (d3 != d1 + d2 && d1 == d2) return true;
		else return false;
	}

}

int main()
{
	int t,n;
	cin >> t;
	int * a = new int;
	for (int  i = 0; i < t; i++)
	{
		cin >> n;
		for (int  j = 0; j < n; j++) cin >> a[j];
		

	}
}