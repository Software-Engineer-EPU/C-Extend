#include <bits/stdc++.h>
using namespace std;

bool Check(long int a)
{
	int dem = 0;
	for ( long int i = 1; i <= a + 1; i++){
		if (a%i == 0) dem++;		
	}
	if (dem == 3) return true; else return false;
	//return true;
}


int main()
{
	// /freopen("input.txt", "r", stdin);
	long int n,s;
	cin >> n;
	for (long int i = 0; i < n; i++)
	{
		cin >> s;
		if (Check(s) == true) cout << "YES" << endl; else cout << "NO" << endl;
	}
}