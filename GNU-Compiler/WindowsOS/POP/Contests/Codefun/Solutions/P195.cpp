#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	do cin >> n; while (n < 0 || n > 2015);
	if (n >= 40 && n <= 43) cout << "Hai Ba Trung";
	if (n == 248) cout << "Ba Trieu";
	if (n >= 544 && n <= 602) cout << "Tien Ly";
	if (n >= 722 && n <= 938) cout << "Tuy Duong";
	if (n >= 939 && n <= 944) cout << "Ngo";
	if (n >= 950 && n <= 965) cout << "Hau Ngo Vuong";
	if (n >= 968 && n <= 980) cout << "Dinh";
	if (n >= 980 && n <= 1009) cout << "Tien Le";
	if (n >= 1010 && n <= 1225) cout << "Ly";
	if (n >= 1226 && n <= 1400) cout << "Tran";
	if (n >= 1400 && n <= 1407) cout << "Ho";
	if (n >= 1428 && n <= 1527) cout << "Le So";
	if (n >= 1528 && n <= 1592) cout << "Mac";
	if (n >= 1533 && n <= 1789) cout << "Hau Le";
	if (n >= 1778 && n <= 1802) cout << "Tay Son";
}