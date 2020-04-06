/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

class Nguoi
{
private:
    string hoten;
    int NamSinh;
public:
    Nguoi()
    {
    	hoten = "Nguyen Van A";
    	NamSinh = 2000;
    }
    ~Nguoi()
    {
    	hoten = "Nguyen Van A";
    	NamSinh = 2000;
    }
    void Gioithieu()
    {
        cout << "Toi ten : "<< hoten<<endl;
        cout << "Nam sinh : "<< NamSinh<<endl; 
    }
};

class SinhVien : public Nguoi
{
private:
    string chuyennganh;
    int mssv;
 
public:
	/*
    Nguoi()
    {
    	hoten = "Nguyen Van A";
    	NamSinh = 2000;
    }
    ~Nguoi()
    {
    	hoten = "Nguyen Van A";
    	NamSinh = 2000;
    }
    */
    void Gioithieu()
    {
        Nguoi::Gioithieu();
        cout << "Ma SV: "<< mssv << endl;
        cout << "Chuyen nganh: "<< chuyennganh << endl; 
    }
    void dihoc()
    {
        cout << hoten <<" di hoc!\n";
    }
    void donghocphi()
    {
        cout << Nguoi::hoten << " dong hoc phi!"<<endl;
    }
};

int main()
{
	SinhVien a; a.dihoc();
	
    
}