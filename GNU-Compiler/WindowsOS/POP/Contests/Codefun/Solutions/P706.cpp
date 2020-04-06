/* Code by KingNNT */

#include <bits/stdc++.h>
using namespace std;

void swap (long int &a, long int &b)
{
	long int t = a;
	a = b;
	b = t;
}


//<---------------------------------------------------->//
/*
long int Partition (long int arr[], long int low , long int high)
{
	long int pivot = arr[high];
	long int left = low;
	long int right = high - 1;
	while (true) {
		while (left <= right && arr[left] < pivot) left ++;
		while (right >= left && arr[right] > pivot) right --;
		if (left >= right) break;
		swap(arr[left],arr[right]);
		left ++;
		right --;
	}
		swap (arr[left],arr[high]);
		return left;
}

void Quicksort(long int arr[], long int low, long int high)
{
	if (low < high){
		long int pi = Partition(arr,low,high);
		Quicksort (arr,low,pi-1);
		Quicksort (arr,pi+1,high);
	}
	
}
*/
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

	
	
	// Hàm main với bộ nhớ động

	long int n; cin >> n;
	long int* a = new long int[n];
	long int* b = new long int[n];

	for (long int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
		
	Quicksort_with_Dynamic_Memory(a,0,n-1);


	//for (long int i = 0; i < n; i++) cout << a[i] << " ";
	//cout << endl;

	long long int max_2;
	for (long int i = 1; i < n; i++) {
		if (a[i] != a[0]) {
			max_2 = a[i];
			break;
		}
	}
	cout << max_2;
	
	for (long int i = 0; i < n; i++)
		if (max_2 == b[i]) {
			cout << " " << i + 1;
			return 0;
		}
	
	/*
	long int arr[] = {10,28,12,23};

	long int n = sizeof(arr)/sizeof(arr[0]);
	Quicksort(arr,0,n-1);
	*/

	return 0;
}