/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "/media/kingnnt/Learning And Working/Code/C-Extend/GNU-Compiler/Test/"
#define FIN pathio "input.txt", "r", stdin
#define FOUT pathio "output.txt", "w", stdout
#define MAXN 50005
#define oo ((1LL << 31) - 1)

vector<pair<int, int>> Graph[MAXN];
queue<int> Q;

int nodes, //number of nodes
    edges; //number of edges

int distMin[MAXN];
bool in_Queue[MAXN];

void readData()
{

    int x,
        y,
        c;

    freopen(FIN);

    scanf("%d %d", &nodes, &edges);

    while (edges--)
    {

        scanf("%d %d %d", &x, &y, &c);

        Graph[x].push_back(make_pair(y, c));
    }

    fclose(stdin);
};

void Dijkstra()
{

    for (int i = 2; i <= nodes; i++)
        distMin[i] = oo;

    distMin[1] = 0;

    Q.push(1);

    in_Queue[1] = true;

    while (!Q.empty())
    {

        int node = Q.front();

        Q.pop();

        in_Queue[node] = false;

        for (vector<pair<int, int>>::iterator it = Graph[node].begin(); it != Graph[node].end(); it++)
        {

            if (distMin[it->first] > distMin[node] + it->second)
            {

                distMin[it->first] = distMin[node] + it->second;

                if (!in_Queue[it->first])
                {

                    Q.push(it->first);

                    in_Queue[it->first] = true;
                }
            }
        }
    }
};

void writeData()
{

    freopen(FOUT);

    for (int i = 2; i <= nodes; i++)
        printf("%d ", (distMin[i] < oo) ? distMin[i] : 0);

    fclose(stdout);
};

int main()
{
    // freopen(fi);
    // freopen(fo);
    // ios_base ::sync_with_stdio(0);
    // cin.tie(0);

    readData();
    Dijkstra();
    writeData();

    return (0);
};