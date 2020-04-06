#include <bits/stdc++.h>
using namespace std;


class birthday
{
private:
	int day,month,year;
public:
	birthday()
	{
		day = month = year = 0;
	}
	~birthday()
	{
		day = month = year = 0;
	}

	void input()
	{
		cout << "Nhap ngay sinh: "; cin >> this->day;
		cout << "Nhap thang sinh: "; cin >> this->month;
		cout << "Nhap nam sinh: "; cin >> this->year;
	}
	void output()
	{
		cout << "Ngay / Thang / Nam Sinh = " << day << "/" << month << "/" << year << endl;
	}
};
class connguoi {
private:
	string hoten,quequan;
	birthday dmy;
public:
	connguoi(){
		hoten = quequan = "";
	}

	~connguoi(){
		hoten = quequan = "";
	}
	void input()
	{
		cout << "Nhap ho ten: ";
		fflush(stdin);
		getline(cin, this->hoten);
		cout << "Nhap que quan: ";
		fflush(stdin);
		getline(cin, this->quequan);
		dmy.input();

	}
	void output()
	{
		cout << "Ho ten = " << this->hoten << endl;
		cout << "Que Quan = " << this->quequan << endl;
		dmy.output();

	}
};

class sinhvien : public connguoi {
private:
	int dtoan, dly, dhoa, dtb;
	string msv,lop;
public:
	sinhvien(){
		dtoan = dly = dhoa = dtb = 0;
		msv = lop = "";
	}
	~sinhvien(){
		msv = dtoan = dly = dhoa = dtb = 0;
		lop = "";
	}

	void input()
	{
		connguoi :: input();
		cout << "Nhap Ma Sinh Vien: "; fflush(stdin); getline(cin, this->msv);
		cout << "Nhap lop: "; fflush(stdin); getline(cin,this->lop);
		cout << "Nhap diem toan: "; cin >> this->dtoan;
		cout << "Nhap diem ly: "; cin >> this->dly;
		cout << "Nhap diem hoa: "; cin >> this->dhoa;
	}
	void tinh_dtb()
	{
		dtb = (dtoan + dly + dhoa)/3;
	}

	void output()
	{
		connguoi :: output();
		cout << "Ma Sinh Vien = " << this->msv << endl;
		cout << "Lop = " << lop << endl;
		cout << "Diem toan = " << this->dtoan << endl;
		cout << "Diem ly = " << this->dly << endl;
		cout << "Diem hoa = " << this->dhoa << endl;
		tinh_dtb();
		cout << "Diem Trung Binh = " << this->dtb << endl;
	}

	//friend istream& operator ;
};
int main()
{
	sinhvien a;
	a.input();
	cout << endl << "---------------------" << endl;
	a.output();

}