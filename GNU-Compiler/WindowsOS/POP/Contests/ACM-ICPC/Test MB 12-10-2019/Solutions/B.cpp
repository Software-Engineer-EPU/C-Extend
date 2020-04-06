#include <bits/stdc++.h>
using namespace std;

string normalize(string s) {
    string r = "#";
    for (char c: s) {
        if (r.back() != c) r.push_back(c);
    }
    return r;
}

int main() {
    string s;
    cin >> s;

    s = normalize(s);
    int n = s.length();

    unordered_map<char, int> ch;
    for (char c = 'a'; c <= 'z'; c++) ch[c] = n;

    int next[n];
    for (int i = n-1; i >= 1; i--) {
        next[i] = ch[s[i]];
        ch[s[i]] = i;
    }

    int count = 0;
    for (int l = 1; l < n; l++) {
        char c = s[l];
        
        for (auto& p: ch)
            if (p.first != c && p.second < next[l])
                count++;

        ch[c] = next[l];
    }

    cout << count << endl;
}