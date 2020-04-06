//#include <pch.h>
#include <iostream>
#include <string>
using namespace std;

class ns {
private:
	int ngay, thang, nam;
public:
	void input()
	{
		cout << "Nhap Ngay Sinh: "; cin >> ngay;
		cout << "Nhap Thang Sinh: "; cin >> thang;
		cout << "Nhap Nam Sinh: "; cin >> nam;
	}

	void output()
	{
		cout << "Ngay / Thang / Nam Sinh = " << ngay << "/" << thang << "/" << nam  << endl;
	}

};

class sinhvien {
private:
	string msv, hoten, quequan, lop;
	ns date;
	float diemtk;
public:
	void input()
	{
		cout << "Nhap Ma Sinh Vien: "; fflush(stdin); getline(cin, msv);
		cout << "Nhap Ho Ten: "; fflush(stdin); getline(cin, hoten);
		cout << "Nhap Que Quan: "; fflush(stdin); getline(cin, quequan);
		cout << "Nhap Lop: "; fflush(stdin); getline(cin, lop);
		cout << "Nhap Diem Tong Ket: "; cin >> diemtk;
		date.input();
	}

	void output()
	{
		cout << "MSV = " << msv << endl;
		cout << "Ho ten = " << hoten << endl;
		cout << "Que quan = " << quequan << endl;
		cout << "Lop = " << lop << endl;
		cout << "Diemtk = " << diemtk << endl;
		date.output();
	}
	string showname()
	{
		return hoten;
	}
};

int main()
{
	int n;
	string b;
	sinhvien a[100];

	cout << "Nhap so luong sinh vien : "; cin >> n;
	for (int i = 0; i < n; i++) a[i].input();

	cout << "Sinh vien sau khi nhap la : " << endl;
	for (int i = 0; i < n; i++) a[i].output();

	for (int i = 0; i < n; i++)
	{
		if (a[i].showname() == "Le Anh Hung") a[i].output();
	}
}