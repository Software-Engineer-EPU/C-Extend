/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio "input.txt", "r", stdin
#define fo pathio "output.txt", "w", stdout

class phanso {
private:
	int tu, mau;
public:
	phanso () {
		tu = mau = 0;
	}

	~phanso (){
		tu = mau = 0;
	}
	/*
	void input()
	{
		cout << "Nhap tu so: ";
		cin >> this->tu;
		cout << "Nhap mau so: ";
		cin >> this->mau;
	}

	void output()
	{
		cout << this->tu << "/" << this->mau << endl;
	}
	*/

	/*
	void cong(phanso a)
	{
		tu = tu*a.mau + mau*a.tu;
        mau = mau*a.mau;
	}
	void tru(phanso a)
    {
        tu = tu * a.mau - mau*a.tu;
        mau = mau*a.mau;
    }
    void nhan(phanso a)
    {
        tu = tu*a.tu;
        mau = mau*a.mau;
    }
    void chia(phanso a)
    {
        tu = tu*a.mau;
        mau = mau*a.tu;
    }
    */

	/*
    friend phanso operator +(phanso a, phanso b)
    {
    	phanso c;
    	c.tu = a.tu * b.mau + a.mau * b.tu;
    	c.mau = a.mau * b.mau;
    	return c;
    }

    friend phanso operator -(phanso a, phanso b)
    {
    	phanso c;
    	c.tu = a.tu * b.mau - b.tu * a.mau;
    	c.mau = a.mau * b.mau;
    	return c;
    }

    friend phanso operator *(phanso a, phanso b)
    {
    	phanso c;
    	c.tu = a.tu * b.tu;
    	c.mau = a.mau * b.mau;
    	return c;
    }

    friend phanso operator /(phanso a, phanso b)
    {
    	phanso c;
    	c.tu = a.tu * b.mau;
    	c.mau = a.mau * b.tu;
    	return c;
    }
    */

    friend istream &operator >> (istream &is, phanso &obj)
    {
    	cout << "Nhap tu so: ";
    	is >> obj.tu;
    	cout << "Nhap mau so: ";
    	is >> obj.mau;
    	return is;
    }

    friend ostream &operator << (ostream &os, phanso obj)
    {
    	//os << "Output:" << endl;
    	os << obj.tu << "/" << obj.mau << endl;
    	return os;
    }
	
	friend phanso cong(phanso a, phanso b);
	friend phanso tru(phanso a, phanso b);
	friend phanso nhan(phanso a, phanso b);
	friend phanso chia(phanso a, phanso b);
	
};

phanso cong (phanso a, phanso b)
{
	phanso c;
	c.tu = a.tu * b.mau + b.tu * a.mau;
	c.mau = a.mau * b.mau;
	return c;
}


phanso tru (phanso a, phanso b)
{
	phanso c;
    c.tu = a.tu * b.mau - b.tu * a.mau;
    c.mau = a.mau * b.mau;
    return c;
}

phanso nhan (phanso a, phanso b)
{
	phanso c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    return c;
}
phanso chia(phanso a, phanso b)
{
    phanso c;
    c.tu = a.tu * b.mau;
    c.mau = a.mau * b.tu;
    return c;
}

int main()
{
	freopen(fi);
	freopen(fo);
	ios_base ::sync_with_stdio(0);
	cin.tie(0);
	
	phanso a,b,c;
	
	/*
	a.input();
	b.input();

	cout << "Output: " << endl;
	a.output();
	b.output();
	*/

	/*
	cout << "Phep cong: " << endl;
	c = a;
	c.cong(b);
	c.output();

	cout << "Phep tru: " << endl;
	c = a;
	c.tru(b);
	c.output();

	cout << "Phep nhan: " << endl;
	c = a;
	c.nhan(b);
	c.output();

	cout << "Phep chia: " << endl;
	c = a;
	c.chia(b);
	c.output();
	*/

	/*
	c = a + b;
	c.output();
	c = a - b;
	c.output();
	c = a * b;
	c.output();
	c = a / b;
	c.output();
	*/

	cin >> a >> b;
	cout << "Output: " << endl;
	/*
	c = a + b; cout << c;
	c = a - b; cout << c;
	c = a * b; cout << c;
	c = a / b; cout << c;
	*/
	c = cong(a,b); cout << c;
	c = tru(a,b); cout << c;
	c = nhan(a,b); cout << c;
	c = chia(a,b); cout << c;
}