#include <bits/stdc++.h>
using namespace std;


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


int main()
{
	long int n;
	do cin >> n; while ( n < 1 || n > 3000);
	long int * a = new long int[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	Quicksort_with_Dynamic_Memory(a,0,n-1);

	for (int i = 0; i < n; i++)
		if (a[i] + 1 != a[i+1])
		{
			cout << a[i]+1;
			return 0;
		}
		cout << n + 1;
}