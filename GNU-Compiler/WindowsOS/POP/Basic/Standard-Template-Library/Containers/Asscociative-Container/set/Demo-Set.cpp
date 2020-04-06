/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout


int main()
{
    freopen(fi);
    freopen(fo);

    set<int> myset;
	set<int>::iterator it;

	// set some initial values:
	for (int i = 1; i <= 10; i++) 
		myset.insert(i * 10);    // set: 10 20 30 40 50

	it = myset.find(20);
	myset.erase (it);
	myset.erase (myset.find(10));

	cout << "myset contains:";
	for (it = myset.begin(); it != myset.end(); it++)
		cout << ' ' << *it;
	cout << endl;

	return 0;
}