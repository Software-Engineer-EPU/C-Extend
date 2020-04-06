// Chuyển chuỗi chữ thường thành chữ hoa

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,x;
	int i = 0;
	fflush(stdin); getline (cin ,s);

	while (s[i]) {
    	x += (toupper(s[i]));
    	i++;
  	}
  	cout << x << endl;
}