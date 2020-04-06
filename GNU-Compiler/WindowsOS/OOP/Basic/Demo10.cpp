#include <bits/stdc++.h>
using namespace std;

class monhoc {
private:
	string tenmon;
	int diemtp,diemthi,sotc;
public:
	monhoc()
	{
		tenmon = "";
		diemtp = diemthi = sotc = 0;
	}

	~monhoc()
	{
		tenmon = "";
		diemtp = diemthi = sotc = 0;
	}

	void input()
	{
		cout << "Nhap Ten Mon Hoc: "; fflush(stdin); getline(cin,tenmon);
		cout << "Nhap Diem Thanh Phan: "; cin >> diemtp;
		cout << "Nhap Diem Thi: "; cin >> diemthi;
		cout << "Nhap So Tin Chi: "; cin >> sotc;
	}

	void output()
	{
		cout << "Ten Mon Hoc: " << tenmon << endl;
		cout << "Diem Thanh Phan: " << diemtp << endl;
		cout << "Diem Thi: " << diemthi << endl;
		cout << "So Tin Chi: " << tinchi() << endl;
		cout << "Diem Trung Binh: " << DTB() << endl;
	}

	float DTB ()
	{
		return diemtp * 0.3 + diemthi * 0.7;
	}
	int tinchi ()
	{
		return sotc;
	}

	float func1 ()
	{
		return DTB() * tinchi();
	}
};

class sinhvien
{
private:
	string masv,tensv;
	int somh;
	//monhoc *a;
	monhoc a[10];
public:
	sinhvien ()
	{
		masv = tensv = "";
		somh = 0;
		//a = NULL;
	}

	~sinhvien ()
	{
		masv = tensv = "";
		somh = 0;
		//delete []a;
	}

	void input ()
	{
		monhoc *a = new monhoc[somh];
		for (int i = 0; i < somh; i++) a[i].input();
	}

	friend istream &operator >> (istream &is, sinhvien &obj)
	{
		cout << "Nhap Ma Sinh Vien: "; fflush(stdin); getline(is,obj.masv);
		cout << "Nhap Ten Sinh Vien: ";	fflush(stdin); getline(is,obj.tensv);
		cout << "Nhap So Luong Mon Hoc: "; is >> obj.somh; obj.input();
		return is;
	}

	friend ostream& operator << (ostream &os, sinhvien obj)
	{
		os << "Ma Sinh Vien: " << obj.masv << endl;
		os << "Ten Sinh Vien: " << obj.tensv << endl;
		os << "So Luong Mon Hoc: " << obj.somh << endl;
		os << "Diem Tong Ket: " << obj.DTK();
		return os;
	}

	float sum1 ()
	{
		float sum = 0;
		for (int i = 0; i < somh; i++) sum += a[i].func1();
		return sum;
	}
	float sum2 ()
	{
		float sum = 0;
		for (int i = 0; i < somh; i++) sum = sum + a[i].tinchi();
		return sum;
	}

	
	float DTK ()
	{
		return sum1() /sum2();
	}
	
};

int main()
{

	//freopen("E:/Code/C/Build-with-GNU/Test/input.txt","r",stdin);
	sinhvien x;
	cin >> x;
	cout << "King = " << x.sum1()  << "/" << x.sum2();
	cout << x;
}