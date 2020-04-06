#include <bits/stdc++.h>
using namespace std;

int Sum_Number (int n)
{
	if (n < 10) return n;
	int sum = 0;
	while (n/10 != 0) {
		sum += n%10;
		n /= 10;
	}
	return sum + n;
}

bool Check (int n)
{
	if (n%Sum_Number(n) == 0) return true; else return false;
}

int main()
{
	int n;
	do cin >> n; while ( n < 1 || n > 1000);
	long int *a = new long int;
	for (int i = 0; i < n; i++) {
		cin >> *(a+i);
	}
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (Check(*(a+i)) == true) dem ++;
	}
	cout << dem;
	delete a;
	return 0;
}