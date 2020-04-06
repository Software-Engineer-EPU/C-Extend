/* Code by KingNNT */

#include <bits/stdc++.h>
using namespace std;

void swap (int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int Partition_with_Dynamic_Memory (int* arr, int low , int high)
{
	int pivot = *(arr+high);
	int left = low;
	int right = high - 1;
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

void Quicksort_with_Dynamic_Memory(int* arr, int low, int high)
{
	if (low < high){
		int pi = Partition_with_Dynamic_Memory(arr,low,high);
		Quicksort_with_Dynamic_Memory (arr,low,pi-1);
		Quicksort_with_Dynamic_Memory (arr,pi+1,high);
	}
	
}


//<---------------------------------------------------------------------->//

int main()
{

	int n; cin >> n;
	int* a = new int [n];
	int* b = new int [n];

	for (int i = 0; i < n; i++) 
		cin >> a[i];
	for (int i = 0; i < n; i++) 
		cin >> b[i];
		
	Quicksort_with_Dynamic_Memory(a,0,n-1);
	Quicksort_with_Dynamic_Memory(b,0,n-1);
	for (long int i = 0; i < n; i++)
		if (a[i] != b[i]) {
			cout << "NO";
			return 0;
		}
	cout << "YES";



	return 0;
}