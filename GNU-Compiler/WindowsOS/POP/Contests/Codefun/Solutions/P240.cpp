#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	loop:while (cin >> n) {
		if (n >= 10 || n <= 0) goto loop;
		//cout << pow(n,n) << endl;
		long long int a = pow(n,n);
		printf("%ld\n",a);
	}
}