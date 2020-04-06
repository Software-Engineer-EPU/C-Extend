#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("E:/Code/C/Build-with-GNU/Test/input.txt","r",stdin);
	string s,t;
	cin >> s >> t;
	int min, dem = 0;
	if (s.length() < t.length()) min = s.length(); else min = t.length();
	for (int i = 0; i < min; i++)
		if (s[i] != t[i]) dem++;
	cout << dem;
}