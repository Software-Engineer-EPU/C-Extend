#include <bits/stdc++.h>
using namespace std;
int main()
{
    long dec,rem,i=1,sum=0;
    //cout << "Enter the decimal to be converted:";
    cin >> dec;
    do
    {
        rem = dec%2;
        sum += (i*rem);
        dec /= 2;
        i *= 10;
    }
    while (dec > 0);
    cout << sum;
    //cout << "The binary of the given number is:" << sum << endl;
    //cin.get();
    //cin.get();
 
    return 0;
}