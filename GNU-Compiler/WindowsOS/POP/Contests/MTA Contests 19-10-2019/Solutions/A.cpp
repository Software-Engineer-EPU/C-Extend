#include<bits/stdc++.h>

#define BASE 1000000007
using namespace std;

vector< pair<int,int> > v;
vector<int> len[100010];
int tx[100010],a[100010],f[100010],g[100010],st[100010];
int n;

void update(int x,int v)
{
//    cout << x << ' ' << v << endl;
    while (x <= 100000)
    {
        tx[x] += v;
        if (tx[x] < 0) tx[x] += BASE;
        tx[x] %= BASE;
        x += (x & -x);
    };
};

int calc(int x)
{
    int r = 0;
    while (x)
    {
        r = (r + tx[x]) % BASE;
        x -= (x & -x);
    };
    return r;
};

int main()
{

    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            v.push_back(make_pair(a[i],i));
        }
        sort(v.begin(),v.end());
        a[v[0].second] = 1;
        for (int i = 1; i < v.size(); i++)
        a[v[i].second] = (v[i].first == v[i - 1].first) ? a[v[i - 1].second] : (i + 1);
        for (int i = 1; i <= 100000; i++) st[i] = BASE;  st[0] = 0;
        int maxlen = 0;
        for (int i = 1; i <= n; i++) {
            int inf = 0;  int sup = maxlen;
            while (inf <= sup) {
                int med = (inf + sup) / 2;
                if (st[med] < a[i]) {
                    f[i] = med;  inf = med + 1;
                }
                else sup = med - 1;
            }
            f[i]++;  maxlen = max(maxlen,f[i]);  st[f[i]] = min(st[f[i]],a[i]);  len[f[i]].push_back(i);
//        cout << i << ' ' << f[i] << endl;
        }
//    for (int i = 1; i <= n; i++) cout << f[i] << endl;
//    cout << len[1].size() << ' ' << len[2].size() << endl;
        memset(tx,0,sizeof(tx));
        memset(g,0,sizeof(g));
        for (int i = 0; i < len[1].size(); i++) g[len[1][i]] = 1;
        for (int i = 2; i <= maxlen; i++) {
            int f1 = 0;  int f2 = 0;
            while (f1 < len[i - 1].size() || f2 < len[i].size()) {
//            cout << f1 << ' ' << f2 << endl;
                if (f2 == len[i].size() || (f1 < len[i - 1].size() && len[i - 1][f1] < len[i][f2])) {
                    update(a[len[i - 1][f1]] + 1,g[len[i - 1][f1]]);
//                cout << len[i - 1][f1] << ' ' << g[len[i - 1][f1]] << endl;
                    f1++;
                }
                else {
                    g[len[i][f2]] = calc(a[len[i][f2]]);
//                cout << len[i][f2] << ' ' << g[len[i][f2]] << endl;
                    f2++;
                }
            }
            for (f1 = 0; f1 < len[i - 1].size(); f1++)
                update(a[len[i - 1][f1]] + 1,-g[len[i - 1][f1]]);
        }
        int ret = 0;
        for (int i = 1; i <= n; i++)
            if (f[i] == maxlen) ret = (ret + g[i]) % BASE;
        printf("%d \n", ret);
        memset(f, 0, sizeof(f));
        memset(len, 0, sizeof(len));
        memset(a, 0, sizeof(a));
        v.clear();
        }
}
