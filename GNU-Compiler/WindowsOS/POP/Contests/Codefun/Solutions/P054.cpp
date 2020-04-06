#include <bits/stdc++.h>
using namespace std;


bool Check(int a)
{
    if (a <= 1) return false;
    if ( a == 2) return true;
    for ( int i = 2; i <= (int)sqrt(a) + 1; i++){
        if (a%i == 0) return false;     
    }
    return true;
}


int main()
{
    long long int n;
    cin >> n;
    long long int a = n;
    for (int j = 2; j <= a/2; j++) {
        if ((Check(j) == true) && (n%j == 0)){
            n /= j;
            //cout << n;
            cout << j << " ";
            j--;
        }

    }
}