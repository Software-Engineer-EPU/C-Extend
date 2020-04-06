#include <bits/stdc++.h>
using namespace std;
int ConvertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    long long int n;
    cin >> n;
    cout << ConvertBinaryToDecimal(n);
    return 0;
}
