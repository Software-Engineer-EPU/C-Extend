#include <bits/stdc++.h>
using namespace std;
class myclass {
private:
	int a;
public:
	myclass(){
		a = 0;
	}
	~myclass(){
		a = 0;
	}

	friend istream &operator >> (istream &is, myclass &obj)
	{
		is >> obj.a;
		return is;
	}

	friend ostream &operator << (ostream &os, myclass & obj)
	{
		os << obj.a;
		return os;
	}
};
int main()
{
	myclass a;
	cin >> a;
	cout << a;
}