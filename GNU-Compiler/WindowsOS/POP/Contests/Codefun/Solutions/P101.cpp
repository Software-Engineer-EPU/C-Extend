#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,sum = 0,i = 1;
	cin >> n;
	bool bl = false;
	while (n >= sum){
		sum += i;
		if (n == sum) {
			bl = true;
			break;
		}
		i++;
	}
	if (bl == false) cout << "NO"; else cout << "YES";
}