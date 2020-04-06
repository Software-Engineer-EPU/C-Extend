#include <bits/stdc++.h>
using namespace std;

int main()
{

	//freopen("E:/Code/C/Build-with-GNU/Test/input.txt","r",stdin);
	string s1 = "pqwertyuiopq";
	string s2 = ";asdfghjkl;a";
	string s3 = "/zxcvbnm,./z";

	char c; cin >> c;
	string s,x = "";
	cin >> s;
	
	if (c == 'R')
	{
		for (int i = 0; i < s.length(); i++)
		{
			for (int j = 1; j < s1.length() - 1; j++)
				if (s[i] == s1[j]) 
				{
					x += s1[j-1];
					break;
				}
			for (int j = 1; j < s2.length() - 1; j++)
				if (s[i] == s2[j])
				{
					x += s2[j-1];
					break;
				}
			for (int j = 1; j < s3.length() - 1; j++)
				if (s[i] == s3[j])
				{
					x += s3[j-1];
					break;
				}
		}
		cout << x;
	}
	else
	{
		for (int i = 0; i < s.length(); i++)
		{
			for (int j = 1; j < s1.length() - 1; j++)
				if (s[i] == s1[j])
				{
					x += s1[j + 1];
					break;
				}
			for (int j = 1; j < s2.length() - 1; j++)
				if (s[i] == s2[j])
				{
					x += s2[j+1];
					break;
				}
			for (int j = 1; j < s3.length() - 1; j++)
				if (s[i] == s3[j])
				{
					x += s3[j+1];
					break;
				}
		}
		cout << x;
	}
}