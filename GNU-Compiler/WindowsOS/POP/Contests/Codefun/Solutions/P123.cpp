#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5];
	cin >> a[0] >> a[1] >> a[2];
	int min = a[0],max = a[0];
	for (int i = 1; i <=2 ; i++ ) {
		if (min > a[i]) min = a[i];
		if (max < a[i]) max = a[i];
	}
	cout << min << " " << max;
}