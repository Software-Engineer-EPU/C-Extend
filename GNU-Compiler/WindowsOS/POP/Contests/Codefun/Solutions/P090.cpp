#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, dem1 = 0, max1 = 1, dem2 = 0, max2 = 1;
	bool check = true;
	cin >> n;
	int* a = new int;
	for (int i = 0; i < n; i++) cin >> *(a+i);
	for (int i = 0; i < n; i++) {
		if (*(a+i) > *(a+i)) dem1++;
		else {
				if (max1 < dem1) max1 = dem1;
				dem1 = 0;
				check = false;
			}
		if (*(a+i) < *(a+i)) dem2++;
		else {
				if (max2 < dem2) max2 = dem2;
				dem2 = 0;
				check = false;
			}
		
	}
	if (check == false) {
		if (max1 > max2 )cout << max1;
		else cout << max2;
	}
	else {
		if (dem1 > dem2) cout << dem1;
		else cout << dem2;
	}
	delete a;
	return 0;
}