#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, dem = 0, max = 1;
	bool check = true;
	cin >> n;
	long long int* a = new long long int;
	for (int i = 0; i < n; i++) cin >> *(a+i);
	for (int i = 0; i < n; i++) {
		if (*(a+i) > 0) dem++;
		else {
				if (max < dem) max = dem;
				dem = 0;
				check = false;
			}
	}
	if (check == false) cout << max; else cout << dem;
	delete a;
	return 0;
}