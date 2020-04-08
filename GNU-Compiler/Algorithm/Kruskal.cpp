/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/media/kingnnt/Learning And Working/Code/C-Extend/GNU-Compiler/Test/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

struct edge
{
    int first, second, weight;
};

typedef vector<vector<pair<int, int>>> adj_list;

vector<edge> kruskal(const adj_list &graph);
int get_pred(int vertex, const vector<int> &pred);

int main()
{
    // freopen(lfi);
    // freopen(lfo);
    // ios_base :: sync_with_stdio (0);
    // cin.tie(0);

    int n, m;
    cin >> n >> m;

    adj_list graph(n);
    int f, s, w;
    while (m-- > 0)
    {
        cin >> f >> s >> w;
        if (f == s)
            continue;
        graph[f - 1].push_back(make_pair(s - 1, w));
    }

    vector<edge> result = kruskal(graph);

    cout << "Here is the minimal tree:" << endl;
    for (auto &_edge : result)
    {
        cout << char(_edge.first + 65) << " connects to " << char(_edge.second + 65) << endl;
    }

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}

vector<edge> kruskal(const adj_list &graph)
{
    vector<edge> edges, minimum_spanning_tree;
    vector<int> pred(graph.size());

    for (int i = 0, n = graph.size(); i < n; i++)
    {
        for (auto &_edge : graph[i])
            edges.push_back({i, _edge.first, _edge.second});
        pred[i] = i;
    }

    auto comp = [&](edge left, edge right) { return left.weight > right.weight; };
    sort(edges.begin(), edges.end(), comp);

    while (!edges.empty())
    {

        edge shortest = edges.back();
        edges.pop_back();

        int f_head, s_head;
        f_head = get_pred(shortest.first, pred);
        s_head = get_pred(shortest.second, pred);

        if (f_head != s_head)
        {
            minimum_spanning_tree.push_back(shortest);

            if (f_head < s_head)
                pred[s_head] = f_head;
            else
                pred[f_head] = s_head;
        }
    }

    return minimum_spanning_tree;
}

int get_pred(int vertex, const vector<int> &pred)
{
    while (pred[vertex] != vertex)
        vertex = pred[vertex];
    return vertex;
}

/*
//////////////////////////////
/////		Input		//////
//////////////////////////////

7 11
1 4 5
1 2 7
2 4 9
2 3 8
2 5 7
3 5 5
4 5 15
4 6 6
6 7 11
5 6 8
5 7 9

//////////////////////////////
*/

/*
//////////////////////////////
/////		Output		//////
//////////////////////////////

Here is the minimal tree:
C connects to E
A connects to D
D connects to F
B connects to E
A connects to B
E connects to G


//////////////////////////////
*/