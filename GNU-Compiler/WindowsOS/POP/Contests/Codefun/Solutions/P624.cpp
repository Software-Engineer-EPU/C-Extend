/* Code by KingNNT */

#include <bits/stdc++.h>
using namespace std;

void swap (long int &a, long int &b)
{
	long int t = a;
	a = b;
	b = t;
}

//<-------------------------------------------------------------->//

long int Partition_with_Dynamic_Memory (long int* arr, long int low , long int high)
{
	long int pivot = *(arr+high);
	long int left = low;
	long int right = high - 1;
	while (true) {
		while (left <= right && *(arr+left) > pivot) left ++;
		while (right >= left && *(arr+right) < pivot) right --;
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


//<---------------------------------------------------------------------->//

int main()
{
	long int n; cin >> n;
	long int* a = new long int[n];

	for (long int i = 0; i < n; i++) 
		cin >> *(a+i);
		
	Quicksort_with_Dynamic_Memory(a,0,n-1);
	for (long int i = 0; i < 3; i++) cout << a[i] << " ";
}