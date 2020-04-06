/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C/Build-with-GNU/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

bool Check(int a)
{
	if (a <= 1) return false;
	if ( a == 2) return true;
	for ( int i = 2; i <= (int)sqrt(a) + 1; i++){
		if (a%i == 0) return false;		
	}
	return true;
}

void _func ()
{
    int m,n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
        if (Check(i) == true)
        {
            cout << i << endl;
        }
}

int main()
{
    //freopen(fi);
    //freopen(fo);

    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        _func();
        cout << endl;
    }
}