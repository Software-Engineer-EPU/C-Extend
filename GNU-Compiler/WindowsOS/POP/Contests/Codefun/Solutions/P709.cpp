#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a, sl = 0; 
	//do cin >> n; while (n < 1 || n > 30000);
	cin >> n;
	//long int* a = new long int[n];

	for (long int i = 0; i < n; i++) {
		cin >> a;
		if (a%4 == 0) sl++;
	}
	cout << sl;

}