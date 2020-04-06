/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "/media/kingnnt/Learning And Working/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio "input.txt", "r", stdin
#define fo pathio "output.txt", "w", stdout

vector<vector<pair<int, int>>> Graph;
int nodes, edges;

void readFile() {
    ifstream* fin = freopen(fi);
    if (fin.is_open())
    {
        cout << "Opened";
    }
    cin >> nodes >> edges;
    // fclose(stdin);
}

void printfMatrix(int nodes) {
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            int a;
            cin >> a;
            cout << a << " ";
        }
        cout << endl;
    }
}

int main()
{
    
    freopen(fo);
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    readFile();
    printfMatrix(nodes);
}