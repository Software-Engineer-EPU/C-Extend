#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n,x,i,dem = 0;
	cin >> n >> x;
	long int* a = new long int [n];
	for (i = 0; i < n; i++) cin >> *(a+i);
	i = 0;
	if (x > n) x %= n;
	dem = n - x;
	//cout << x << " " << dem << endl;
	while (i < n) {
		if(dem >= n) dem -= n;
		cout << *(a+dem) << " ";
		i++; dem++;
	}
}