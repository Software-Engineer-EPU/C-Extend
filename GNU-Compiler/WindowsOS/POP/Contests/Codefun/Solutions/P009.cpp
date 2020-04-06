#include <bits/stdc++.h>
using namespace std;

int main()
{
	char c; int n;
	cin >> c >> n;
	// a = 97
	// z = 122
	int t = (int)c + n;
	if (t > 122) t -= 26;
	cout << (char)t;
	
}