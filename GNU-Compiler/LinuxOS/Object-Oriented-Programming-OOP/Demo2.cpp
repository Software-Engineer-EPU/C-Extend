/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "/media/kingnnt/Learning And Working/Code/C-Extend/GNU-Compiler/Test/"
#define lfi pathio "input.txt"
#define lfo pathio "output.txt"

int main()
{
    ifstream fi;
    ofstream fo;
    fi.open(lfi, fi.in);
    fo.open(lfo, fo.out);
    // use "fi >> " to read from file
    // use "fo << " to write to file
    ios_base ::sync_with_stdio(0);
    cin.tie(0);

    string line;
    if (fi.is_open())
    {
        while (getline(fi, line))
        {
            fo << line << '\n';
        }
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}