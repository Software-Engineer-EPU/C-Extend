//nnd-2k20cvp
using namespace std;

//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <map>
#include <set>
#include <vector>
#include <string.h>
#include <cmath>
#include <climits>

#define nof "nnd"
#define fi nof".inp","r",stdin
#define fo nof".out","w",stdout

string s;

int rome(char s){
    if (s == 'I')
        return 1;
    if (s == 'V')
        return 5;
    if (s == 'X')
        return 10;
    if (s == 'L')
        return 50;
    if (s == 'C')
        return 100;
    if (s == 'D')
        return 500;
    else if (s == 'M')
        return 1000;
}

int main() {

    //freopen(fi);
    //freopen(fo);

    int res = 0;
    cin >> s;   
    int i = s.size()-1;
    //cout << i;
    while (i>=0) {
        res += rome(s[i]);
        //cout << res << "\n";
        if (s[i] == 'V' || s[i] == 'X') {
            if (s[i-1] == 'I') {res -= rome(s[i-1]); i--;};
        }
        else {
            if (s[i] == 'L' || s[i] == 'C') {
                if (s[i-1] == 'X') res -= rome(s[i-1]), i--;
            }
            else {
                if (s[i] == 'D' || s[i] == 'M') {
                    if (s[i-1] == 'C') res -= rome(s[i-1]), i--;
                }
            }
        }
        i--;
        //cout << s[i] << " ";
    }
    cout << res;
    return 0;

}

