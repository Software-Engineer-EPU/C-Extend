#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0,t;
	for (int i = 1; i <= n; i++) {
		t = (float)1/i;
		//cout << t << endl;
		s += t;
	}
	printf("%.3f\n", s);
}