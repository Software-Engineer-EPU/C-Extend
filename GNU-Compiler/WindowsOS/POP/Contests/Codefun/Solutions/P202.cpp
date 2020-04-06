#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,t, dem = 0;
	cin >> a >> b >> c >> t;
	for (int i = 0; i <= 100; i++)
		for (int j = 0; j <= 100; j++)
			for (int k = 0; k <= 100; k++)
				if (i*a + j*b + k*c == t) dem++;
	cout << dem;
}