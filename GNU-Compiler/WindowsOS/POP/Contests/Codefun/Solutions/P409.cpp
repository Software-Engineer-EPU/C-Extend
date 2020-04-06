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
		if(s[i] == ' '&& s[i+1] == ' ')
		{
			Delete(s,i);
			i--;
		}
    if(s[0] == ' ') Delete(s,0);
    if(s[s.length() - 1] == ' ') Delete(s,s.length()-1);
}
 
int main()
{
    string s;
    fflush(stdin); getline(cin,s);
	Delete_Space(s);
	string x = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') x += s[i];
		else {
			cout << x << endl;
			x = "";
		}
	}
	cout << x;
	
}