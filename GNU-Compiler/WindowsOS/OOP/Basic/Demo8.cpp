#include <iostream>
#include <algorithm>
#include<functional> // std::greater
#include <vector>
using namespace std;
 
class Mang
{
private:
    int a[100];
    int n;
public:
    Mang(){ n =0; }
    ~Mang() {}
    int getAi(int i)
    {
        return a[i];
    }
    void nhap()
    {
        int xx;
        n = 0;
        while (cin >> xx)
        {
            a[n++] = xx;
        }
    }
 
    void xuat()
    {
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
 
    int getspt()
    {
        return n;
    }
 
    void set(int i, int x)
    {
        a[i] = x;
    }
 
    int tim(int x)
    {
        for (int i = 0; i < n; i++)
            if (a[i] == x)
                return i;
        return -1;
    }
    void sapxep(int tang)
    {
        if (tang == 1)
            sort(a, a+n);
        else
            sort(a , a + n, greater<int>());
    }
};
 
int main()
{
    int x;
    cin >> x;
 
    Mang B;
    B.nhap();
    Mang C = B;
    cout << B.getspt() << endl;
    cout << (B.tim(x)!=-1 ? "TRUE" : "FALSE") << endl;
    B.sapxep(1);
    B.xuat();
    C.set(0, C.getAi(0) + 1);
    C.sapxep(0);
    C.xuat();
    system("pause");
    return 0;
}