#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
	fflush(stdin);
	gets(s);
	//cout << strrev(s);
	cout << s;
	for ( int i = strlen(s)-1; i >=0 ; i--)
		cout << s[i];
}