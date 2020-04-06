/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class Oxy
{
private:
    int x, y;

public:
    Oxy()
    {
        x = y = 0;
    }
    ~Oxy()
    {
        x = y = 0;
    }
    void set()
    {
        cout << "Input x, y: ";
        cin >> x >> y;
    }

    void get()
    {
        cout << "x, y: " << x << ", " << y << endl;
    }
};
int main()
{
    freopen(fi);
    freopen(fo);
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    Oxy obj; obj.set(); obj.get();

    return 0;
}