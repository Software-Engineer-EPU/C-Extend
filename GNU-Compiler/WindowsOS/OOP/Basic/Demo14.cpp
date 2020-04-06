/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;
/*
#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout
*/
class connguoi
{
protected:
	string hoten;
	int tuoi, gioitinh;
public:
	connguoi()
	{
		hoten = "";
		tuoi = gioitinh = 0;
	}
	~connguoi()
	{
		hoten = "";
		tuoi = gioitinh = 0;
	}
	
	friend istream &operator >> (istream &is, connguoi &obj)
	{
		cout << "Nhap Ho Ten: "; fflush(stdin); getline(is, obj.hoten);
		cout << "Nhap Tuoi: "; is >> obj.tuoi;
		cout << "Nhap Gioi Tinh: "; is >> obj.gioitinh; // Nam = 0; Nu = 1;
		return is;
	}
	friend ostream &operator << (ostream &os, connguoi obj)
	{
		os << "Ho Ten: " << obj.hoten << endl;
		os << "Tuoi: " << obj.tuoi << endl;
		os << "Gioi Tinh: " << obj.gioitinh << endl;
		return os;
	}

	
};
class hocsinh : public connguoi
{
protected:
	int mahs;
	string lop, xeploaihk;
	float dtb;
public:
	hocsinh()
	{
		mahs = 0;
		dtb = 0;
		lop = xeploaihk = "";
	}
	~hocsinh()
	{
		mahs = 0;
		dtb = 0;
		lop = xeploaihk = "";
	}

	friend istream &operator >> (istream &is, hocsinh &obj)
	{
		cout << "Nhap Ho Ten: "; fflush(stdin); getline(is, obj.hoten);
		cout << "Nhap Tuoi: "; is >> obj.tuoi;
		cout << "Nhap Gioi Tinh: "; is >> obj.gioitinh; // Nam = 0; Nu = 1;
		cout << "Nhap Ma Hoc Sinh: "; is >> obj.mahs;
		cout << "Nhap Diem Trung Binh: "; is >> obj.dtb;
		cout << "Nhap Lop: "; is >> obj.lop;
		cout << "Nhap Xep Loai Hanh Kiem: "; is >> obj.xeploaihk;
		return is;
	}
	friend ostream &operator << (ostream &os, hocsinh obj)
	{
		os << "Ho Ten: " << obj.hoten << endl;
		os << "Tuoi: " << obj.tuoi << endl;
		os << "Gioi Tinh: " << obj.gioitinh << endl;
		os << "Ma Hoc Sinh: " << obj.mahs << endl;
		os << "Diem Trung Binh: " << obj.dtb << endl;
		os << "Lop: " << obj.lop << endl;
		os << "Xep Loai Hanh Kiem: " << obj.xeploaihk << endl;
		return os;
	}
	
	bool khenthuong()
	{
		if (this->dtb >= 8.0 && this->xeploaihk == "TOT") return true; else return false;
	}

	int getmahs()
	{
		return mahs;
	}
	
};
int main()
{
	/*
	freopen(fi);
    freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	*/

	/*
	connguoi a;
	cin >> a;
	cout << endl << endl;
	cout << a;
	*/
	
	cout << "Nhap So luong Hoc Sinh: "; int n; cin >> n;
	hocsinh* arr = new hocsinh[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	cout << endl << endl << "Danh Sach Da Nhap: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i];
	
	cout << endl << endl << "Nhap Ma Hoc Sinh Can Kiem Tra: "; int m; cin >> m;
	for (int i = 0; i < n; i++)
		if (arr[i].getmahs() == m)
		{
			if (arr[i].khenthuong() == true) cout << "Hoc Sinh Duoc Khen Thuong";
			else cout << "Hoc Sinh Khong Duoc Khen Thuong";
		}
	
	return 0;
}