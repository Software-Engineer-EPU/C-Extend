#include <bits/stdc++.h>
using namespace std;
int main()
{
    long dec,rem,i=1,sum=0;
    cin >> dec;
    do
    {
        rem = dec%2;
        sum += (i*rem);
        dec /= 2;
        i *= 10;
    }
    while (dec > 0);
    cout <<  sum << endl;
    return 0;
}