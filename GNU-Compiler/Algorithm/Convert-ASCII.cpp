#include <bits/stdc++.h>
using namespace std;

//<------------------------------------>//
void Signature_1()
{
	cout << endl << endl;
	cout << "\t     | ---------------------- |" << endl;
	cout << "\t     |   Developer King.NNT   |" << endl;
	cout << "\t     | ---------------------- |" << endl;
	cout << endl;
}
void Signature_2 ()
{
	cout << endl << endl;
	cout << "\t --> \t ----------------\t<--" << endl;
	cout << "\t --> \t Code by King.NNT\t<--" << endl;
	cout << "\t --> \t ----------------\t<--" << endl;
	cout << endl << endl;
}
int Convert_Char_to_Decimal(char c)
{
	int t = (int) c;
	return t;
}

void Convert_Decimal_to_Binary(int n)
{
	int a[10],i;
 	for ( int i = 0; i <= 9; i++ ) a[i]  = 0;

	for( int i = 0; n > 0; i++) {
		a[i] = n % 2;
		n = n / 2;
	}

	for(int i = 7; i >= 0; i--)  cout << a[i];
}

void output(char c, int t)
{
	Signature_1();	
	t = Convert_Char_to_Decimal(c);
	
	cout << "Character" << "\t" << c << endl;
	cout << "Decimal" << "\t\t" << t << endl;
	cout << "Binary" << "\t\t"; Convert_Decimal_to_Binary(t);

	Signature_2();
}

int main()
{
	char c;
	int t;
	cout << "Input Character: "; fflush(stdin); cin >> c;
	output(c,t);

	
}