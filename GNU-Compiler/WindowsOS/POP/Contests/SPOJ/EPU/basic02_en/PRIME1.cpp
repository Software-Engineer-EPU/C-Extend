#include <bits/stdc++.h>
using namespace std;

bool Check(long long int a)
{
	if (a <= 1) return false;
	if ( a == 2) return true;
	for (long long int i = 2; i <= (long long int)sqrt(a) + 1; i++){
		if (a%i == 0) return false;		
	}
	return true;
}

int main()
{
	//freopen("input.txt","r",stdin);
	int t;
	cin >> t;
	long long int m,n;
	for (int i = 0; i < t; i++)	{
		cin >> m >> n;
		for (long long int j = m; j <= n; j++) 
			if ( Check(j) == true ) cout << j << endl;
		cout << endl;
	}

}