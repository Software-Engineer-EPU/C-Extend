#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a1,b1,c1,a2,b2,c2;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;
	if ( c1 > c2) {
		cout << 2;
		return 0;
	}
	else if ( c1 < c2) {
		cout << 1;
		return 0;
		}
		else {
			if ( b1 > b2) {
				cout << 2;
				return 0;
			}
			else if ( b1 < b2) {
				cout << 1;
				return 0;
				}
				else if ( c1 > c2) {
					cout << 2;
					return 0;
					}
					else if ( c1 < c2) {
						cout << 1;
						return 0;
					}
		}
}