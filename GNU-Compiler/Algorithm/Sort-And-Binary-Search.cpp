/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C/Build-with-GNU/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

void swap (long int &a, long int &b)
{
	long int t = a;
	a = b;
	b = t;
}

long int Partition_with_Dynamic_Memory (long int* arr, long int low , long int high)
{
	long int pivot = *(arr+high);
	long int left = low;
	long int right = high - 1;
	while (true) {
		while (left <= right && *(arr+left) < pivot) left ++;
		while (right >= left && *(arr+right) > pivot) right --;
		// Thay đôi dấu " < " thành " > " tại dòng 53
		// Thay đôi dấu " > " thành " < " tại dòng 54
		// Để thay đổi các sắp xếp từ bé đến lớn thành từ lớn đến bé
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

int binarySearch(long int arr[], int l, int r, int x) 
{ 
	if (r >= l) { 
		int mid = l + (r - l) / 2; 

		if (arr[mid] == x) 
			return mid; 

		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	} 
	return -1; 
} 

int main()
{
    freopen(fi);
    freopen(fo);

    long int n; cin >> n;
	long int* arr = new long int[n];

	for (long int i = 0; i < n; i++) 
		cin >> arr[i];
		
	Quicksort_with_Dynamic_Memory(arr,0,n-1);
    int x; cin >> x;
    int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result; 
	return 0; 
}