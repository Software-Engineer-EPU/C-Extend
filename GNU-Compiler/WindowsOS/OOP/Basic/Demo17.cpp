/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio "input.txt", "r", stdin
#define fo pathio "output.txt", "w", stdout

class Color
{
protected:
	string tenmau, mamau;

public:
	Color()
	{
		tenmau = mamau = "";
	}
	Color(string tenmau, string mamau)
	{
		this->tenmau = tenmau;
		this->mamau = mamau;
	}
	~Color()
	{
		tenmau = mamau = "";
	}

	friend istream &operator>>(istream &is, Color &obj)
	{
		cout << "Nhap Ten Mau: "; fflush(stdin); getline(is, obj.tenmau);
		cout << "Nhap Ma Mau: "; fflush(stdin);	getline(is, obj.mamau);
		return is;
	};

	friend ostream &operator<<(ostream &os, Color obj)
	{
		os << "Ten Mau: " << obj.tenmau << endl;
		os << "Ma Mau: " << obj.mamau << endl;
		return os;
	}
	string getTenMau()
	{
		return this->tenmau;
	}
};

class Point
{
protected:
	int x, y;

public:
	Point()
	{
		x = y = 0;
	}
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	~Point()
	{
		x = y = 0;
	}

	friend istream &operator>>(istream &is, Point &obj)
	{
		cout << "Nhap x, y";
		is >> obj.x >> obj.y;
		return is;
	};
	friend ostream &operator<<(ostream &os, Point obj)
	{
		os << "x = " << obj.x << endl;
		os << "y = " << obj.y << endl;
		return os;
	}

	bool CheoChinh()
	{
		if (x == y)
			return true;
		else
			return false;
	}
};

class Pixel : public Color, public Point
{
public:
	Pixel()
	{
		x = y = 0;
		tenmau = mamau = "";
	}

	Pixel(int x, int y, string tenmau, string mamau)
	{
		this->x = x;
		this->y = y;
		this->tenmau = tenmau;
		this->mamau = mamau;
	}

	~Pixel()
	{
		x = y = 0;
		tenmau = mamau = "";
	}
	friend istream &operator>>(istream &is, Pixel &obj)
	{
		cout << "Nhap x: ";	is >> obj.x;
		cout << "Nhap y: ";	is >> obj.y;
		cout << "Nhap Ten Mau: "; is >> obj.tenmau;
		cout << "Nhap Ma Mau: "; is >> obj.mamau;
		return is;
	}
	friend ostream &operator<<(ostream &os, Pixel obj)
	{
		os << "x = " << obj.x << endl;
		os << "y = " << obj.y << endl;
		os << "Ten Mau = " << obj.tenmau << endl;
		os << "Ma Mau = " << obj.mamau << endl;
		return os;
	}

	bool Check()
	{
		if (x == y && mamau == "#0000FF")
			return true;
		else
			return false;
	}
};

int main()
{
	freopen(fi);
	freopen(fo);
	ios_base ::sync_with_stdio(0);
	cin.tie(0);

	cout << "Nhap So Luong: "; int n; cin >> n;
	Pixel *arr = new Pixel[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	cout << "Output" << endl;
	for (int i = 0; i < n; i++)
		if (arr[i].Check() == true)
			cout << arr[i];
	return 0;
}
/*
//////////////////////////////
/////		INPUT		//////
//////////////////////////////
3
1 2 Red #FF0000
2 2 Blue #0000FF
2 3 Yellow #FFFF00

*/
