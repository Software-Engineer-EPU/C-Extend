#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a,b;
	int min, max;
	cin >> a >> b;
	if ((int)a >= (int)b) {
		cout << 0;
		return 0;
	}
	cout << (int)b-(int)a+1-2;
}

// Problem này sida vl