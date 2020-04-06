#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	do cin >> n; while (n < 1 || n > 10);
	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) cout << " ";
		for (int j = 1; j <= 2 * i + 1; j++) cout << "*";
		cout << endl;
	}
	
	for (int i = n - 1 ; i >= 0; i--) {
		for (int j = 1; j <= n - i; j++) cout << " ";
		for (int j = 1; j <= 2 * i + 1; j++) cout << "*";
		cout << endl;
	}           
}