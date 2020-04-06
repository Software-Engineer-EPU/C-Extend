#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b;
	cin >> n;
	for(int i = 0; i < n; i ++){
		cin >> a >> b;
		for ( int h = 0; h < a; h ++){
			for ( int c = 0; c < b; c++)
				if ((h+c)%2==0) cout << "*"; else cout << ".";
			cout << endl;
		}
		cout << endl;

	}
	return 0;
}