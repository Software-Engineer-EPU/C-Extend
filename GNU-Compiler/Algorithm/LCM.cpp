#include<bits/stdc++.h>
using namespace std;

/*
int gcd(int a, int b)
{
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}
*/

int lcm(int a, int b)
{
    return a * b / __gcd(a,b);
}
 
int main(){
    int a = 5, b = 7;
    cout << "BCNN = " << lcm(a,b);
}