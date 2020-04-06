#include <bits/stdc++.h>
using namespace std;

void output(float n)
{
	if (n == (int)n) cout << (int)n; else printf("%.2f",n);
}


int main()
{
	float a,b;
	char c;
	cin >> a >> b >> c;
	// Đã thử thêm do while và score = 10 :v
	if (c == '+') output(a + b);
	else if (c == '-') output(a - b);
		else if (c == '*') output(a * b);
			else output(a / b);
}