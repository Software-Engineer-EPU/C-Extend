/*
Code by KingNNT
*/
#include <bits/stdc++.h>
using namespace std;
#define pathio "E:/Code/C/Build-with-GNU/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

#define MAX 10005

void input_arr(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] :";
		cin >> a[i];
	}
}

void output_arr(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

//Hàm sắp xếp mảng
void InterChange_Sort(int a[], int n)
{
	int temp;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
			
	}
}

int main ()
{
    freopen(fi);
    freopen(fo);
    
	int a[MAX], n,c,b;
	cout << "Nhap n = "; cin >> n;
	input_arr(a, n);
	output_arr(a, n);

	cout << "Mang sau khi sap xep la: ";

	clock_t start = clock();// ham bất đầu đếm thời gian thực hiện chương trình

	InterChange_Sort(a, n);
	output_arr(a, n);

	clock_t finish = clock();// ham đếm thời gian kết thúc

	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << endl << endl;
	cout << "Time = " << duration;
	
	return 0;
}