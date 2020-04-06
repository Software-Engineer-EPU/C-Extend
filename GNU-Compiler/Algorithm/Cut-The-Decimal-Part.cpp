//Cắt phần thập phân
#include <bits/stdc++.h>
using namespace std;
int main() {
    double number= 2;
    size_t decimal_places(2);
    cout << showpoint << setprecision( static_cast< int >( log10( number ) ) + 1 + decimal_places );
    cout << number << endl;
     return 0;
}
