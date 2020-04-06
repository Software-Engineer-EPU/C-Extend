#include <bits/stdc++.h>
using namespace std;

bool Check(int a)
{
	if ((float)sqrt(a) == (int)sqrt(a)) return true; else return false;
}
int main()
{
	long long int a;
	cin >> a;
	if (Check(a) == true) cout << "YES"; else cout << "NO";
}