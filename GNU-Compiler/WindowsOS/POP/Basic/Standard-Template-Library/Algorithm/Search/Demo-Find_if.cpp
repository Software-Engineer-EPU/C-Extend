/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

bool isFive(int value)
{
	return value == 5;
}

int main()
{
    freopen(fi);
    freopen(fo);
    ios_base :: sync_with_stdio (0);
    cin.tie(0);

    vector <int> container;
	
	for (int i = 0; i < 10; i++)
		container.push_back(i);

	vector <int> :: iterator iter = find_if(container.begin(), container.end(), isFive);
	
	if (iter != container.end())
	{
		cout << "Found at index: " << iter - container.begin() << endl;
	}
	else
	{
		cout << "Can not found this value!" << endl;
	}

	return 0;
}