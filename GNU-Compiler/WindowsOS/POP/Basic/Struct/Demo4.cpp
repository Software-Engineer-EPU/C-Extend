/* Code by KingNNT */
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

#define MAX 100

struct graph
{
    int n;
    int A[MAX][MAX];
};

void inputgraph(graph &g)
{
        cin >> g.n;
        for (int i = 0; i < g.n; i++)
            for (int j = 0; j < g.n; j++)
            {
                int temp;
                cin >> temp;
                g.A[i][j] = temp;
            }
}
void Displaygraph(graph g)
{
    //check
    cout << "Do thi da nhap:\n";
    cout << "So dinh:" << g.n << endl;
    for (int i = 0; i < g.n; i++)
    {
        for (int j = 0; j < g.n; j++)
        {
            cout << g.A[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    freopen(fi);
    freopen(fo);
    ios_base :: sync_with_stdio (0);
    cin.tie(0);

    int n, start, goal;
    graph g;
    inputgraph(g);
    Displaygraph(g);
}