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
  	//cout << s.length() << " " << x.length() << endl;
  	int dem = 0;
  	for (int i = 0; i < s.length(); i++)
  			if (s[i] != x[i]) dem++;
  	cout << dem << endl << x;
}