#include <bits/stdc++.h>
using namespace std;

class birthday
{
private:
	int day, month, year;
public:
	birthday(){
		day = month = year = 0;
	}
	~birthday(){
		day = month = year = 0;
	}

	void input()
	{
		cout << "Nhap Ngay Sinh: "; cin >> day;
		cout << "Nhap Thang Sinh: "; cin >> month;
		cout << "Nhap Nam Sinh: "; cin >> year;
	}

	void output()
	{
		cout << "Ngay / Thang / Nam Sinh la: " << day <<  "/" << month << "/" << year << endl;
	}

	//friend class person;
};

class person
{
private:
	string hoten, quequan;
	birthday dmy;
public:
	person(){
		hoten = quequan = "";
	}
	~person(){
		hoten = quequan = "";
	}

	void input ()
	{
		cout << "Nhap ho va ten: "; fflush(stdin); getline(cin,hoten);
		cout << "Nhap que quan: "; fflush(stdin); getline(cin,quequan);
		dmy.input();
	}

	void output ()
	{
		cout << "Ho va ten: " << hoten << endl;
		cout << "Que quan: " << quequan << endl;
		dmy.output();
	}
	
};

class sinhvien : public person
{
private:
	string msv,lop;
	int dtoan,dly,dhoa,dtb;
public:
	sinhvien(){
		msv = lop = "";
		dtoan = dly = dhoa = dtb = 0;
	}
	~sinhvien(){
		msv = lop = "";
		dtoan = dly = dhoa = dtb = 0;
	}

	void input()
	{
		person :: input();
		cout << "Nhap ma sinh vien: "; fflush(stdin); getline(cin, msv);
		cout << "Nhap lop: "; fflush(stdin); getline(cin, lop);
		cout << "Nhap diem toan: "; cin >> dtoan;
		cout << "Nhap diem ly: "; cin >> dly;
		cout << "Nhap diem hoa: "; cin >> dhoa;
	}

	void tinh_dtb()
	{
		dtb = (dtoan + dly + dhoa) / 3;
	}

	void output()
	{
		person :: output();
		cout << "Ma Sinh Vien :" << msv << endl;
		cout << "Lop :" << lop << endl;
		cout << "Diem Toan = " << dtoan << endl;
		cout << "Diem Ly = " << dly << endl;
		cout << "Diem Hoa = " << dhoa << endl;
		tinh_dtb();
		cout << "Diem Trung Binh = " << dtb;


	}
	
};

int main()
{
	sinhvien a;
	a.input();
	a.output();
}