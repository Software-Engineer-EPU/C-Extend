/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

void solve ()
{
  vector <int, int> c;
  int a[105], b[105];

  int n;
  cin >> n;
  for (int  i = 0; i < n; i++) cin >> a[i];
  int j = 0;
  for (int i = 1; i <= a[i-1]; i++) b[j++] = i;

  set_difference(
    begin(a), end(a),
    begin(b), end(b),
    back_inserter(c)
  );

  if (c.size() == 0) cout << "good job";
  else
  {
    for (auto &e:c) cout << e << endl;
  }
}

int main()
{
  freopen(fi);
  freopen(fo);
  ios_base :: sync_with_stdio (0);
  cin.tie(0);

  solve ();
  return 0;  
}