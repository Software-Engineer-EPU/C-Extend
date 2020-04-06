/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout


int main()
{
    freopen(fi);
    freopen(fo);
    ios_base :: sync_with_stdio (0);
    cin.tie(0);

    vector <int> vec;
    for (int i = 0; i < 10; i++) vec.push_back(i);

    vector <int> :: iterator iter = find(vec.begin(), vec.end(), 0); // Tìm 11 có không

    if (iter == vec.end())
	{
		cout << "Can not find your given value!" << endl;
	}
	else
	{
		cout << "Found at index: " << iter - vec.begin() << endl;
	}

	return 0;
}