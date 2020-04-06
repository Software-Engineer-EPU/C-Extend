#include <bits/stdc++.h>
using namespace std;

bool Check(int a)
{
	if ((float)sqrt(a) == (int)sqrt(a)) return true; else return false;
}

int main()
{
	int n;
	do cin >> n; while ( n < 1 || n > 100);
	int *a = (int *)calloc(n,sizeof(int));
	for (int i = 0; i < n; i++) {
		cin >> *(a+i);
	}
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (Check(*(a+i)) == true) dem ++;
	}

	cout << dem;
}