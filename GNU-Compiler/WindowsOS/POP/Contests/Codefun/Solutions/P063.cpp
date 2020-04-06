#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin >> n;
	int* a = (int*)	calloc (n,sizeof(int));
	*(a+1) = *(a+2) = 1;
	if (n <= 2) {
		cout << 1;
		return 0;
	}
	for (int i = 3; i <= n; i++) {
		*(a+i) = *(a+i-1) + *(a+i-2);
		if (*(a+i) > n) {
			k = i;
			break;
		}
	}
	if (n == *(a+k-1)) cout << "YES"; else cout << "NO";
}
