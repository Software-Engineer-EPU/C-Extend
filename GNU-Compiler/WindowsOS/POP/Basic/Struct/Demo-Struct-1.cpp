#include <bits/stdC++.h>
using namespace std;

typedef struct {
	int d,m,y;
} date;

struct nhanvien {
	char hoten [50];
	int manv;
	char quequan[100];
	date dmy;
	int luong;
};

//----------------------------------------------------------------------------//
//								Function I/O date 							  //
//----------------------------------------------------------------------------// 
void input_date (int &d, int &m, int &y)
{
	cout << "Nhap ngay: "; cin >> d;
	while (d < 1 || d > 31) {
		cout << "--> WARNING: Ngay khong hop le !!! <--" << endl;
		loop: cout << "Nhap lai ngay: "; cin >> d;
	}

	//<----->//
	cout << "Nhap thang: "; cin >> m;
	while (m < 1 || m > 12) {
		cout << "--> WARNING :Thang khong hop le !!!<--" << endl;
		cout << "Nhap lai thang: "; cin >> m;
	}

	if (m == 4 || m == 6 || m == 9 || m == 11)
		if (d == 31) {
			cout << "--> WARNING :Thang khong hop le !!!<--" << endl;
			goto loop;
		}

	if (m == 2 && d > 29) {
		cout << "--> WARNING :Thang khong hop le !!!<--" << endl;
		goto loop;
	}

	//<----->//
	cout << "Nhap nam: "; cin >> y;
	while (y < 1) {
		cout << "--> WARNING: Nam khong hop le !!! <--" << endl;
		cout << "Nhap lai nam: "; cin >> y;
	}

	if ( y % 4 != 0 && m == 2 && d > 28) {
		cout << "--> WARNING :Thang khong hop le !!!<--" << endl;
		goto loop;
	}
}

void output_date (int d, int m, int y)
{
	cout << "Ngay/thang/nam :" << d << "/" << m << "/" << y << endl;
}

//----------------------------------------------------------------------------//
//								Function I/O a person						  //
//----------------------------------------------------------------------------//

void input_nv (nhanvien &nv)
{
	cout << "Nhap ma nhan vien: "; cin >> nv.manv;
	cout << "Nhap ho va ten: "; fflush(stdin); gets(nv.hoten);
	cout << "Nhap que quan: "; fflush(stdin); gets(nv.quequan);
	cout << "Nhap thong tin ngay thang nam sinh" << endl;
	input_date(nv.dmy.d,nv.dmy.m,nv.dmy.y);
	cout << "Nhap so luong: "; cin >> nv.luong;
	cout << endl << "***" << endl << endl;
}

void output_nv (nhanvien nv)
{
	cout << endl << "----------------------" << endl ;
	cout << "Output: " << endl;
	cout << "Ma nhan vien: " << nv.manv << endl;
	cout << "Ho va ten: " << nv.hoten << endl;
	cout << "Que quan: " << nv.quequan << endl;
	output_date(nv.dmy.d,nv.dmy.m,nv.dmy.y);
	cout << "Luong: " << nv.luong << endl;
}

//----------------------------------------------------------------------------//
//					Function I/O list person with static memory			  	  //
//----------------------------------------------------------------------------//
void input_listnv (nhanvien listnv[], int &sl)
{
	do {
		cout << "Nhap so luong nhan vien: "; cin >> sl;
	}
	while (sl <= 0);
	cout << "----------" << endl;
	for (int i = 0; i < sl; ++i) {
		cout << "Nhan vien thu " << i << endl;
		input_nv(listnv[i]);
	}
}

void output_listnv (nhanvien listnv[], int sl)
{
	for (int i = 0; i < sl; ++i){
		cout << "Nhan vien thu " << i << endl;
		output_nv(listnv[i]);
	}
}
/*
//----------------------------------------------------------------------------//
//				Funtion I/O list person with dynamic memory					  //
//----------------------------------------------------------------------------//
//
//	Không thể sử dụng ...
void input_listnv (nhanvien listnv[], int* &sl)
{
	int* a = (int *) malloc (sl * sizeof(int));
	for (int i = 0; i < sl; i++) {
		cout << "Nhan vien thu " << i << endl;
		cin >> *(a+i);
	}
}

*/


//----------------------------------------------------------------------------//
//						Function write data to file .txt 					  //
//----------------------------------------------------------------------------//
void writetotxt()
{
	FILE* output;
	output = fopen("output.txt","r+");
	fprintf(output, "So luong nhan vien la: %d \n");
	fprintf(output, "------------------ \n");

}



//----------------------------------------------------------------------------//
//----------------------------------------------------------------------------//




int main()
{
	/*
	nhanvien listnv[100];
	int sl;
	input_listnv (listnv, sl);
	output_listnv (listnv, sl);
	*/
	writetotxt();
}