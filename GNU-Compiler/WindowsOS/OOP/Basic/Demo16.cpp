#include<bits/stdc++.h>
using namespace std;
class _vector
{
	private: 
		float* v; 
		int n;
	public:
		_vector()
		{
			cout << "Nhap So Phan Tu Cua v: "; cin >> n;
			float* v = new float[n];
			for (int i = 0; i < n; i++)
			{
				cout << "Nhap v[" << i << "]: ";
				cin >> v[i];
			}
		}
		_vector(int n)
		{
			this->n = n;
			float* v = new float[n];
			for (int i = 0; i < n; i++) cin >> v[i];
		}
		_vector(int n, float arr[])
		{
			float* v = new float[n];
			for (int i = 0; i < n; i++)
			{
				cout << "Nhap v[" << i << "]: ";
				cin >> v[i];
			}
		}
		_vector(const _vector &obj)
		{
			n = obj.n;
			v = obj.v;
		}
		~_vector()
		{
			delete v;
			n = 0;
		}
		
		void Display()
		{
			cout << "So Phan Tu: " << n << endl;
			cout << "Cac Toa Do: " << endl;
			for (int  i = 0; i < n; i++) cout << v[i] << " ";
		}
};

int main()
{
	_vector obj;
	obj.Display();
}