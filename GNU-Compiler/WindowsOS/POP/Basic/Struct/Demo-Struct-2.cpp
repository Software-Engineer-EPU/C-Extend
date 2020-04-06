#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int mahang;
	char tenhang[50];
	char xuatxu[50];
	float giaban;
} hanghoa;

void input(hanghoa &hh)
{
	cout << "Nhap ma hang: "; cin >> hh.mahang;
	cout << "Nhap ten hang: "; fflush(stdin); gets(hh.tenhang);
	cout << "Nhap xuat xu: "; fflush(stdin); gets(hh.tenhang);
	cout << "Nhap gia ban: "; cin >> hh.giaban;
}


int main()
{
    cout << "Hello World";
}
