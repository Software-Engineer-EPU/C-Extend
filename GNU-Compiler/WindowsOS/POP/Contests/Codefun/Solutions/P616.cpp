#include <bits/stdc++.h>
using namespace std;


void swap (int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int Partition_with_Dynamic_Memory (long int* arr, long int low , long int high)
{
	long int pivot = *(arr+high);
	long int left = low;
	long int right = high - 1;
	while (true) {
		while (left <= right && *(arr+left) < pivot) left ++;
		while (right >= left && *(arr+right) > pivot) right --;
		if (left >= right) break;
		swap(*(arr+left),*(arr+right));
		left ++;
		right --;
	}
		swap (*(arr+left),*(arr+high));
		return left;
}

void Quicksort_with_Dynamic_Memory(long int* arr, long int low, long int high)
{
	if (low < high){
		long int pi = Partition_with_Dynamic_Memory(arr,low,high);
		Quicksort_with_Dynamic_Memory (arr,low,pi-1);
		Quicksort_with_Dynamic_Memory (arr,pi+1,high);
	}
	
}


int main()
{
	long int n; cin >> n;
	//long int dem = 0;
	long int *a = new long int [n];
	for (int i = 0; i < n; i++) cin >> a[i];
	
	
	Quicksort_with_Dynamic_Memory(a,0,n-1);

	long int dem = 1, sl = 0;

	//for (int i = 0; i < n; i++) cout << a[i] << " ";
	//cout << endl;

	for (int i = 0; i < n; i++) {
		if (a[i] == a[i+1]) dem++;
		else {
			if (dem >= 2) sl ++;
			dem = 1;
		}
	}
	cout << sl;
	

	/*
	for (long int i = 0; i < n; i++)
		for (long int j = 0; j < n; j++)
			if (a[i] == a[j] && a[i] != -10) {
				for (long int k = 0; k < n; k++)
					if (a[k] == a[i]) a[k] = -10;
				dem++;
				break;
			}
	cout << dem;
	*/
}