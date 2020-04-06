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

void Bubblesort(long int *arr, long int &n)
{
 	for (int i = 0; i < n - 1; i++) 
		for (int j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) swap(arr[j],arr[j+1]);
}


void Filter_Duplicate_Dumbers_with_Dynamic_Memory (long int *&a, long int &n)
{
	for (long int i = 0; i < n; i++)
	    for (long int t = i+1; t < n; t++) {
	    	while (a[i] == a[t]) {
	        	for (long int j = i; j < n; j++)            
	            	a[j] = a[j+1];
	        		n--;        
	        }    
	    }
}

int main()
{
	long int n; cin >> n;
	long int *a = new long int [n];
	for (int i = 0; i < n; i++) cin >> a[i];
	Quicksort_with_Dynamic_Memory(a,0,n-1);
	//Bubblesort(a,n);
	Filter_Duplicate_Dumbers_with_Dynamic_Memory(a,n);
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}