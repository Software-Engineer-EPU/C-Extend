#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin >> n >> d;
	int dem = n;
	int*a = (int*) calloc (n,sizeof(int));
	for (int i = 0; i < n; i++) cin >> *(a+i);
	for (int i = 0; i < n-1; i++) {
		if (*(a+i) + d > *(a+i+1)) dem--;
	}
	cout << dem;

}