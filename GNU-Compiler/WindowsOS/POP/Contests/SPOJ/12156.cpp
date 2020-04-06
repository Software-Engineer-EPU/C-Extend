// Hàm gets chỉ dùng trên C++11 trở xuống, không dùng cho C++14
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
	fflush(stdin);
	int n,k=0;
	string s;
	cin >> n;
	
	do{
		getline(cin,s);
		int len =strlen(s);
		for ( int i =0; i < len/2; i+=2)
			cout << s[i];
		cout << endl;
		k++;
	}
	while (k<=n);
	return 0;
}