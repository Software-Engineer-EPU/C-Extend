#include <bits/stdc++.h>
using namespace std;

class Oxy{
private:
	float x,y;
public:
	Oxy(){
		this->x = this->y = 0;
	}
	~Oxy(){
		this->x = this->y = 0;
	}

	friend istream& operator >> (istream& is , Oxy &a)
	{
		cout << "x = "; is >> x;
		cout << "y = "; is >> y;
		return is;
	}

	friend ostream& operator <<(ostream& os, Oxy a)
	{
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}

	friend float KhoangCach (Oxy a, Oxy b);
}

class DanhSach{
private:
	int Size;
	Oxy ds[100];
public:
	DanhSach{
		Size = 0;
	}
	~DanhSach{
		Size = 0;
	}

	friend istream& operator >> (istream& is , Oxy &a)
	{
		cout << "Nhap Size: "; is >> a.Size;
		for (int i = 0; i < a.Size; i++) cin >> a.ds[i];
	}

	friend ostream& operator <<(ostream& os, Oxy a)
	{
		cout << "Danh Sach la: ";
		for (int i = 0; i < a.Size; i++) cout << a.ds[i];
	}
}

float KhoangCach (Oxy a, Oxy b)
{
	return sqrt(pow((a.x - b.x),2) - pow((a.y - b.y),2));
}

int main()
{
	Oxy a,b;
	cin >> a;
	cin >> b;

	cout << KhoangCach(a,b);

	DanhSach a;
	cin >> a;
	cout << a;
}