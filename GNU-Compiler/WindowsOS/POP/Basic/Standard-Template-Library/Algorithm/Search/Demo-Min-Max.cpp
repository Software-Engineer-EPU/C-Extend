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
    for (int i = 10; i < 20; i++) vec.push_back(i);

    vector <int> :: iterator iter_min = min_element(vec.begin(), vec.end());
    vector <int> :: iterator iter_max = max_element(vec.begin(), vec.end());

    cout << *iter_min << endl;
    cout << *iter_max << endl;
    
}