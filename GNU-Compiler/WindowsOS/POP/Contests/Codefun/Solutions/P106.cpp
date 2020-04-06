#include <bits/stdc++.h>
using namespace std;

int main()
{
	int d,m,y;
	do cin >> d; while ( d <=0 || d > 31);
	do cin >> m; while ( m <= 0 || m > 12);
	do cin >> y; while ( y <= 0);


	if ( m < 3) {
		m +=12;
		y --;
	}
	int n = (d + 2*m+(3*(m+1)) / 5 + y + (y/4)) % 7;
	switch ( n ) {
		case 0: cout << "Sunday"; break;
		case 1: cout << "Monday"; break;
		case 2: cout << "Tuesday"; break;
		case 3: cout << "Wednesday"; break;
		case 4: cout << "Thursday"; break;
		case 5: cout << "Friday"; break;
		case 6: cout << "Saturday"; break;
	}
}