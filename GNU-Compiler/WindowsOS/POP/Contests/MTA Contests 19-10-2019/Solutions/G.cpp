#include <bits/stdc++.h>
using namespace std;

void _func()
{
	int n;
	cin >> n;
	int *a = new int[n]; 
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = n - 1; i > 0; i--) cout << a[i] << " ";
	cout << a[0];

}

int main()
{
	int k;
	cin >> k;
	for (int i = 0; i < k-1; i++)
	{
		_func();
		cout << endl;
	}
	_func();
}