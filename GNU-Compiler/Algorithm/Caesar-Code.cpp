#include <bits/stdc++.h>
using namespace std;

#define K 5 // Constant Caesar

string lowercase(string s)
{
	int i = 0;
	string x = "";
	while (s[i]) {
    	x += (tolower(s[i]));
    	i++;
  	}
  	return x;
}

void choose_select (int &a)
{
	cout << "\t \t --------------" << endl;
	cout << "Do you want to code or decode?" << endl;
	cout << "Press 1 if you want to code" << endl;
	cout << "Press 2 if you want to decode" << endl << endl;
	cout << "Enter your selection: "; do cin >> a; while (a != 1 && a!=2);
	cout << "\t \t --------------" << endl;
}

void reverse (string s)
{
	string x;
	for (int i = s.length()-1; i >=0 ; i--)
		x +=s[i];
	cout << x;
}


//<-------------------------------------->//

void Convert_Code (char s)
{
	if ((int)s < 97 || (int)s > 122) {
		cout << (char)s;
		return;
	}
	int t = int(s) + K;
	if ( t < 97) t += 26;
	if ( t > 122) t -= 26;
	cout << char (t);
}

void Convert_Decode (char s)
{
	if ((int)s < 97 || (int)s > 122) {
		cout << (char)s;
		return;
	}
	int t = int(s) - K;
	if ( t < 97) t += 26;
	if ( t > 122) t -= 26;
	cout << char (t);

}


//<-------------------------------------->//

void Code (string s)
{
	for (int i = 0; i < s.length(); i++) {
		Convert_Code(s[i]);
	}
}

void Decode (string s)
{
	for (int i = 0; i < s.length(); i++) {
		Convert_Decode(s[i]);
	}
}
int main()
{
	// a = 97
	// z = 122
	// x = 120
	// 120 - 97 = 23
	// Có 26 chữ cái
	string s; int a;
	cout << "Input : ";
	fflush(stdin); getline(cin,s);
	choose_select (a);
	cout << "Output : ";
	if (a == 1) Code(s); else Decode(s);
	cout << endl << endl;
	return 0;
}