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

    queue<int> myqueue;
	int myint;

	cout << "Please enter some integers (enter 0 to end):" << endl;

	do {
		cin >> myint;
		myqueue.push(myint);
	} while (myint);

	cout << "myqueue contains: ";
	while (!myqueue.empty())
	{
		cout << ' ' << myqueue.front(); // Tham chiếu phần tử đầu của hàng đợi
		myqueue.pop();
	}
	cout << endl;

	return 0;
}