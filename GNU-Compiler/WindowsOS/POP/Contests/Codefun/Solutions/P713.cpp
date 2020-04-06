#include <bits/stdc++.h>
using namespace std;

void Del (long int *&b, long int vi_tri_xoa, long int &m)
{
	for (long int i = vi_tri_xoa; i < m; i++ )
		b[i] = b[i+1];
	m--;
}

void Del_2(long int *&a, long int &m, long int vi_tri_xoa)
{
	long int gt_del = a[vi_tri_xoa - 1];
	for (long int i = 0; i < m; i++)
		if (b[i] == )

}

void Printf(long int *a, long int n)
{
	for (long int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
}


int main()
{
	long int n,m,x; cin >> n >> x;
	long int * a = new long int [n];
	long int * b = new long int [n];
	for (long int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	long int m = n,c;
	for (long int i = 0; i < x; i++) {
		cin >> c;
		Del_2(a,c,n);
		Printf(a,n);
	}
	delete a;
	return 0;
}