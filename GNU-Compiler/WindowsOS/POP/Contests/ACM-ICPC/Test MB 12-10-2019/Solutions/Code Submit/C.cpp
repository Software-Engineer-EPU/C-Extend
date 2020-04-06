#include <bits/stdc++.h>
using namespace std;

double f(double x, double w, double g, double h) {
    double a = x;
    double b = w - x;

    return sqrt(a * a + g * g) + sqrt(b * b + h * h);
}

void solve() {
    int w, g, h, r;
    cin >> w >> g >> h >> r;

    g -= r;
    h -= r;

    double left = 0;
    double right = w;

    while (right - left >= 1e-6) {
        double x1 = left + (right - left) / 3;
        double x2 = right - (right - left) / 3;

        if (f(x1, w, g, h) > f(x2, w, g, h))
            left = x1;
        else
            right = x2;
    }

    printf("%.8f %.8f\n", f(0, w, 0, abs(g - h)), f(left, w, g, h));
}

int main() {
    int n;
    cin >> n;

    while (n--) solve();
}