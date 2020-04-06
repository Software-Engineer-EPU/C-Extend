#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	do cin >> n; while (n < 1 || n > 1000000000);
	if (n < 10) {
		cout << n;
		return 0;
	}
	int sum = 0, i = 1;
	while (n/10 != 0) {
		sum += n%10;
		n /= 10;
		i++;
	}
	printf("%.2f\n",(float)(sum + n)/i);
}