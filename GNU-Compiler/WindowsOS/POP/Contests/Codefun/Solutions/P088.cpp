#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, dem = 1, max = 1;
	cin >> n;
	long long int * a = new long long int;
	for (int i = 0; i < n; i++) cin >> *(a+i);
	for (int i = 0; i < n; i++) {
		if (*(a+i) == *(a+i+1)) dem++;
		else {
				if (max < dem) max = dem;
				dem = 1;
			}	
	}
	cout << max;
	delete a;
	return 0;
}