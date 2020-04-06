//Đão ngươc chuỗi
#include <bits/stdc++.h>
using namespace std;

string Reverse_1 (string s)
{
	string x;
	for (int i = s.length()-1; i >=0 ; i--)
		x +=s[i];
	return x;
}

void Reverse_2 (char c[])
{
	cout << strrev(c);
}

int main ()
{
	char c[100];
	fflush(stdin);
	gets(c);
	Reverse_2(c);
}