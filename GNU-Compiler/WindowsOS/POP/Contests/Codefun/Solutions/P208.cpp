/* Code by KingNNT */

#include <bits/stdc++.h>
using namespace std;

int main()
{


	int n, dem = 0;
	cin >> n;
	int* a = (int*) calloc (n,sizeof(int));

	for (int i = 0; i < n; i++) 
		cin >> *(a+i);

	int x; cin >> x;
	for (int i = 0; i < n; i++)
		if (x == *(a+i)) dem++;
	cout << dem;

}