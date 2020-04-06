// Số May Mắn
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
	int a;
	cin >> a;
	if ( Check(a) == true ) cout << "YES"; else cout << "NO";
}