/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class cauthu
{
private:
	string hoten, vitri;
	int tuoi;
	float can, chieucao;
public: 
	cauthu()
	{
		hoten = vitri = "";
		tuoi = 0;
		can = chieucao =0;
	}
	~cauthu()
	{
		hoten = vitri = "";
		tuoi = 0;
		can = chieucao =0;
	}
	friend istream &operator >> (istream &is, cauthu &obj) 
	{
		fflush(stdin);
		cin.ignore();
		cout << "Nhap Ho Ten: "; getline(is, obj.hoten);
		cout << "Nhap Vi Tri: "; getline(is, obj.vitri);
		fflush(stdin);
		cout << "Nhap Tuoi: "; is >> obj.tuoi;
		cout << "Nhap Can Nang: "; is >> obj.can;
		cout << "Nhap Chieu Cao:"; is >> obj.chieucao;
		return is;
	}
	friend ostream &operator <<( ostream &os, cauthu obj)
	{
		os << "Ten cau thu: " << obj.hoten << endl;
		os << "Tuoi: " << obj.tuoi << endl;
		os << "Vi tri: " << obj.vitri << endl;
		os << "Can nang: " << obj.can << endl;
		os << "Chieu cao: " << obj.chieucao << endl;
		return os;
	}
	bool operator < (const cauthu &obj)
	{
		if(chieucao < obj.chieucao) return true;
		else if(chieucao > obj.chieucao) return false;
	        else if( can > obj.can) return true;
	            else return false;
	}
};

template <class T>
class danhsach
{
	private:
		int size;
		T *ds;
	public:
		danhsach()
		{
			size = 0;
			ds = NULL;
		}
		~danhsach()
		{
			size = 0;
			delete ds;
		}
	friend istream &operator >>(istream &is, danhsach &obj)
	{
		cout << "Nhap Size: ";
		cin >> obj.size;
		obj.ds = new T[obj.size];
		for (int i = 0; i < obj.size; i++)
		{
			cout << "Nhap Phan Tu Thu " << i << " : ";
			cin >> obj.ds[i];
		}
		return is;
	}
	friend ostream &operator <<( ostream &os, const danhsach &obj)
	{
		for(int i = 0; i < obj.size; i++)
			cout << obj.ds[i] << endl;
		return os;
	}
	void Sort()
	{
 		for (int i = 0; i < size - 1; i++) 
			for (int j = 0; j < size - i - 1; j++) 
				if (ds[j] < ds[j + 1]) swap(ds[j],ds[j+1]);
	}
	int getsize()
	{
		return size;
	}
};

int main()
{
	freopen(fi);
	freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	
	danhsach<int> obj;
	cin >> obj;
	cout << endl << endl << "Output 1: " << endl;
	cout << obj;
	cout << "--> After Sort: " << endl; obj.Sort(); cout << obj;
	cout << endl << endl;

	
	danhsach<cauthu> obj_cauthu;
	cin >> obj_cauthu;
	cout << endl << endl << "Output 2: " << endl;
	cout << obj_cauthu;
	cout << "--> After Sort: " << endl;
	obj_cauthu.Sort(); cout << obj_cauthu;
	
}

/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////

5
2 1 3 5 4
3
Nguyen Van A
Tien Dao
20
60
170
Nguyen Van B
Tien Ve
21
65
178
Nguyen Van C
Thu Mon
22
62
177

*/
/*
Tạo một class cauthu gồm hoten, vitri, tuoi, cannang, chieucao
Nạp chồng toán tử nhập, xuất

Tạo một khuôn hình lớp danhsach gồm: int size và, T* ds
Nạp chồng toán tử nhập, xuất

- Chương trình chính
1. Nhập vào 1 danh sách số nguyên, Sort mảng đó và in ra
2. Nhập vào 1 danh sách cầu thủ, Sort mảng đó và in ra
*/