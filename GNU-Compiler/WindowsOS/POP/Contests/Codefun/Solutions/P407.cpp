#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	fflush(stdin); getline(cin,s1);
	fflush(stdin); getline(cin,s2);
	int dem = 0;
	
	for (int i = 0; i < s1.length(); i++)
		for (int j = 0; j < s2.length(); j++)
			if (s1[i] == s2[j])	dem ++;
	cout << dem;
}