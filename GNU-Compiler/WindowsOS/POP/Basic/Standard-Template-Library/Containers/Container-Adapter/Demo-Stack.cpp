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

    //input
    int decNumber;
	cin >> decNumber;

	//converting
	stack<bool> binary;
	while (decNumber)
	{
		binary.push((decNumber % 2 == 1));
		decNumber /= 2;
	}

	//output
	while (!binary.empty())
	{
		cout << binary.top(); // Tham chiếu tới phần tử mới nhất của stack
		binary.pop(); // Xóa phần từ trong stack
	}
	cout << endl;

	return 0;
}