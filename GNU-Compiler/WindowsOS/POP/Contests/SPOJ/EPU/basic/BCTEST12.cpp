#include <bits/stdc++.h>
using namespace std;

void Delete(string &s, int vitrixoa)
{
	for(int i = vitrixoa; i < s.length(); i++)
		s[i] = s[i+1];
		//s[s.length() - 1]= '\0'; // \0 là kí tự kết thúc chuỗi
		s.resize(s.length() - 1);
}

void Delete_Space(string &s)
{
    for(int i = 0; i < s.length(); i++)
		if(s[i] == ' ')
		{
			Delete(s,i);
			i--;
		}
    if(s[0] == ' ') Delete(s,0);
    if(s[s.length() - 1] == ' ') Delete(s,s.length()-1);
}

int main()
{
	char na[12] = {'A','O','Y','E','U','I','a','o','y','e','u','i'};
	string s;
	//fflush(stdin); getline(cin, s);
	cin >> s;

	for (int i = 0; i < s.length(); i++)
		for (int j = 0; j < 12; j++)
			if (s[i] == na[j])
			{
				s[i] = ' ';
				i--;
			}
	Delete_Space(s);

	int  i = 0;
	string x; // Chuỗi chữ thường của s
	while (i <= s.length()) {
		x += (tolower(s[i]));
		i++;
	}


	string x1 = "";
	for (int i = 0; i < x.length(); i++)
	{
		x1 += ".";
		x1 += x[i];
		
	}
	cout << x1;
}
