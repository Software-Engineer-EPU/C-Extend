#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a,b;
	cin >> a >> b;
	//cout << a << b;
	//float e = (float)(a+b)*(a-b);
	//float f = (float)(a*b)*(a/b);
	float c = (float)((a+b)*(a-b))/((a*b)*(a/b));
	//cout << e/f;
	printf("%.2f\n",c);

}