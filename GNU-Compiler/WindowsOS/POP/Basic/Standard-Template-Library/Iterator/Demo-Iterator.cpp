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

  vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);

	vector<int>::iterator the_beginning = vec.begin();
	vector<int>::iterator the_end = vec.end();

	cout << *(the_beginning) << endl;
	//cout << *(the_end) << endl; //print a garbage value
	
	the_end--;
	cout << *(the_end) << endl;

	return 0;
}