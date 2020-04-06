#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int*a = (int*) calloc (n,sizeof(int));
	for (int i = 0; i < n; i++)
		cin >> *(a+i);
	int x, dem = 0;
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (*(a+i)%2 == 0) dem++;
		if (dem < x) cout << *(a+i) << " ";
		else return 0;
	}
}