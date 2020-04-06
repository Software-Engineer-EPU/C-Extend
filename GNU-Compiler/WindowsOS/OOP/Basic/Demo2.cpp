#include <bits/stdc++.h>
using namespace std;
class songuyen {
private:
	int x;
public:
	void input() {
		cin >> this->x;
	}
	int value() {
		return this->x;
	}
};

int main()
{
	int n, sum = 0;
	cout << "Nhap so luong phan tu: ";
	do cin >> n; while (n >= 100 || n <= 0);

	songuyen a[100];
	for (int i = 0; i < n; i++) {
		a[i].input();
		sum += a[i].value;
	}
	cout << "Tong = " << sum << endl;
	cout << "TBC = " << sum / n << endl;
	int max = a[0].value, min = a[0].value;

	for (int i = 1; i < n; i++) {
		if (a[i].value > max) max = a[i].value;
		if (a[i].value < min) min = a[i].value;
	}
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;

	int x, dem = 0;
	cout << "Nhap x: "; cin >> x;
	for (int i = 0; i < n; i++)
		if (a[i].value % 2 == 0 && a[i].value < x) dem++;
	cout << "SL = " << dem;
}

