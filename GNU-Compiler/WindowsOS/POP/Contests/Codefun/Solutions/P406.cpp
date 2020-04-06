#include <bits/stdc++.h>
using namespace std;

bool Check_Invalid(int a)
{
	if (a <= 47 ) return false;
	if (a >= 58 && a <= 64 ) return false;
	if (a >= 91 && a <= 96 ) return false;
	if (a >= 123 ) return false;
	return true;
}


int main()
{
	string s;
	fflush(stdin);
	getline(cin,s);
	if (s.length() < 4) {
		cout << "Invalid";
		return 0;
	}
	else {
		bool bl_thuong = false, bl_hoa = false, bl_so = false;
		for (int i = 0;  i < s.length(); i++) {
			if (Check_Invalid((int)s[i]) == false) {
				cout << "Invalid";
				return 0;
			}

			if ((int)s[i] >= 65 && (int)s[i] <= 90) bl_hoa = true;
			if ((int)s[i] >= 97 && (int)s[i] <= 122) bl_thuong = true;
			if ((int)s[i] >= 48 && (int)s[i] <= 57) bl_so = true;
		}
		
		/*
		if (bl_hoa == true) cout << "bl_hoa = true" << endl; else cout << "bl_hoa == false" << endl;
		if (bl_thuong == true) cout << "bl_thuong = true" << endl; else cout << "bl_thuong == false" << endl;
		if (bl_so == true) cout << "bl_so = true" << endl; else cout << "bl_so == false" << endl;
		*/



		if (bl_hoa == true && bl_thuong == true && bl_so == true && s.length() >= 8) {
			cout << "Strong";
			return 0;
		}
		else {
			cout << "Weak";
			return 0;
		}
	}
}