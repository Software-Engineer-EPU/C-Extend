#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n; cin >> n;
	long int *a = new long int [n];
	cin >> *a;
	for (int i = 1; i < n; i++) {
		cin >> *(a+i);
		if (*(a+i) == *(a+i-1)) {
			i--; n--;
		}
	}
	for (int i = 0; i < n; i++) cout << *(a+i) << " ";

}