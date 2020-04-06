#include <bits/stdc++.h>
using namespace std;

bool Check(int a)
{
	if ((float)sqrt(a) == (int)sqrt(a)) return true; else return false;
}
int main()
{
	int a;
	cin >> a;
	if (Check(a) == true) cout << "1"; else cout << "0";
}