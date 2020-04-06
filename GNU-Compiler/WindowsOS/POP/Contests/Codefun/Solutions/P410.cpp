#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	do cin >> n; while (n < 0 || n > 100);
	switch (n) {
		case 0: cout << "zero"; return 0;
		case 1: cout << "one"; return 0;
		case 2: cout << "two"; return 0;
		case 3: cout << "three"; return 0;
		case 4: cout << "four"; return 0;
		case 5: cout << "five"; return 0;
		case 6: cout << "six"; return 0;
		case 7: cout << "seven"; return 0;
		case 8: cout << "eight"; return 0;
		case 9: cout << "nine"; return 0;
		case 10: cout << "ten"; return 0;
		case 11: cout << "eleven"; return 0;
		case 12: cout << "twelve"; return 0;
		case 13: cout << "thirteen"; return 0;
		case 14: cout << "fourteen"; return 0;
		case 15: cout << "fifteen"; return 0;
		case 16: cout << "sixteen"; return 0;
		case 17: cout << "seventeen"; return 0;
		case 18: cout << "eighteen"; return 0;
		case 19: cout << "nineteen"; return 0;
		case 20: cout << "twenty"; return 0;
		case 100: cout << "one-hundred"; return 0;
	}
	int a = n / 10, b = n % 10;
	switch (a) {
		case 2: cout << "twenty"; break;
		case 3: cout << "thirty"; break;
		case 4: cout << "forty"; break;
		case 5: cout << "fifty"; break;
		case 6: cout << "sixty"; break;
		case 7: cout << "seventy"; break;
		case 8: cout << "eighty"; break;
		case 9: cout << "ninety"; break;
	}
	cout << "-";
	switch (b) {
		case 1: cout << "one"; return 0;
		case 2: cout << "two"; return 0;
		case 3: cout << "three"; return 0;
		case 4: cout << "four"; return 0;
		case 5: cout << "five"; return 0;
		case 6: cout << "six"; return 0;
		case 7: cout << "seven"; return 0;
		case 8: cout << "eight"; return 0;
		case 9: cout << "nine"; return 0;
	}
}