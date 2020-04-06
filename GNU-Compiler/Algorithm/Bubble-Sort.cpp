// Sắp xếp nổi bọt
#include <bits/stdc++.h>
using namespace std;

// arr là mảng cần sắp xếp
// n là số phần tử của mảng
// Sắp xếp từ bé đến lớn
// 
void swap (int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Bubblesort(int arr[], int n)
{
 	for (int i = 0; i < n - 1; i++) 
		for (int j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) swap(arr[j],arr[j+1]);
}

void input(int arr[], int &n)

{	
	cout << "Nhap so phan tu cua mang n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {
 		cout << "Phan tu arr["<<i<<"]" << " = ";
 		cin >> arr[i];
 	} 
 }

void output(int arr[], int &n) { 
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

int main () {
	int arr[100], n;
  	input(arr, n);
  	cout << "=< Mang ban dau la: ";
  	output(arr, n);
  	Bubblesort(arr, n);
  	cout<<"=> Mang khi sap xep la: ";
  	output(arr, n);
  	return 0;
} 