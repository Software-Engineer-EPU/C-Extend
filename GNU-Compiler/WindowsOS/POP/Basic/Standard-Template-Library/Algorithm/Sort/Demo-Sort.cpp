/* Code by KingNNT */
// http://www.cplusplus.com/reference/algorithm/sort/
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

    vector<int> container;
	
	srand(time(NULL));

	for (int i = 0; i < 10; i++) container.push_back(rand() % 100);

	for (int i = 0; i < container.size(); i++) cout << container.at(i) << " ";
	cout << endl;

	sort(container.begin(), container.end());

	for (int i = 0; i < container.size(); i++) cout << container.at(i) << " ";
	cout << endl;

	return 0;
}