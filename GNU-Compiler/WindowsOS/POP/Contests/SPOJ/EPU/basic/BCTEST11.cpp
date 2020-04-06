#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    do cin >> n; while (n < 1 || n > 1000);

    int dem;
    string s;
    bool bl;
    for(int i = 2; i <= n; i++)
    {
        dem = 0;
        bl = false;
        while(n % i == 0)
        {
            ++dem;
            n /= i;
        }

        if(dem)
        {
            s = to_string(i);
            for (int j = 0; j < s.length(); i++)
            if (s[i] != '4' && s[i] != '7')
            {
                bl = true;
                break;
            }
        }
    }
    if (bl == true) cout << "YES"; else cout << "NO";
}

/*
int main()
{
    int n;
    do cin >> n; while (n < 1 || n > 1000);
    if (n % 4 == 0 || n % 7 == 0)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
            if (s[i] != '4' && s[i] != '7')
            {
                cout << "NO";
                return 0;
            }
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
*/
