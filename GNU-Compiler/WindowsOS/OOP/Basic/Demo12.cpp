/*
// tao class conguoi gom cac thuoc tinh: ten, tuoi, quequan
// co phuong thuc: nhap xuat

// tao class sinhvien gom thuoc tinh: msv, lop
// phuong thuc: nhap xuat
*/
/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class connguoi
{
private: 
	  string ten,quequan;
	  int tuoi;
public: 
	connguoi()
	{
		ten = quequan = "";
		tuoi= 0;
	}
	~connguoi()
	{
		ten = quequan = "";
		tuoi= 0;
	}
	void nhap()
    {
    	cout<< " nhap ten :"; fflush(stdin);getline(cin,ten);
    	cout<< " nhap que quan:";fflush(stdin);getline(cin,quequan);
    	cout<< " nhap tuoi:";cin>> tuoi;
	}
	void xuat()
	{
		cout<< "ten: "<< ten<< endl;
		cout<< " que quan:"<< quequan<< endl;
		cout<< " tuoi:"<< tuoi<< endl;
	}
};

class sinhvien : public connguoi
{
	private:
		string msv,lop;
	public:
		sinhvien()
		{
			msv = lop= " ";
		}
		~sinhvien()
		{
			msv=lop =" ";
		}
	void nhap()
	{
		connguoi::nhap();
		cout<< " msv:";fflush(stdin);getline(cin,msv);
		cout<< "lop:";fflush(stdin);getline(cin,lop);
	}
	void xuat()
	{
		connguoi::xuat();
		cout<<" msv:"<< msv<< endl;
		cout<<" lop:"<< lop<< endl;
	}
};

int main()
{
	freopen(fi);
    freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	sinhvien b[5];
	for(int i = 0; i < 3; i++) b[i].nhap();
	for(int i = 0; i < 3; i++) b[i].xuat();
}