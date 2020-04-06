#include <bits/stdc++.h>
using namespace std;
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

int main()
{
	string s;
	fflush(stdin); getline(cin,s);
	if (s == Reverse_1(s)) cout << "YES"; else cout << "NO";
	return 0;
}