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

    vector <int> arr;
    int temp;
    for (int  i = 0; i < 3; i++) 
    {
        cin >> temp;
        arr.push_back(temp);
    }
    vector <int> :: iterator iter_max = max_element(arr.begin(),arr.end());
    vector <int> :: iterator iter_min = min_element(arr.begin(),arr.end());

    for (auto e:arr)
    {
        if (e != *iter_max && e!= *iter_min)
            cout << e * *iter_max + *iter_min;
    }

}