#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	loop:while (cin >> n) {
		if (n <= 0 || n >= 100) goto loop;
		if (n != 69) cout << n << endl; else return 0;
	}
}