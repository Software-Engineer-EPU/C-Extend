// Chuyển chuỗi chữ hoa thành chữ thường
/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "path"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout


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

int main()
{
	//freopen(fi);
    //freopen(fo);
	//ios_base :: sync_with_stdio (0);
	//cin.tie(0);
	
	string s; getline (cin ,s);
	cout << lowercase(s);

}