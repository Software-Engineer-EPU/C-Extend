/* Code by KingNNT */

#include <bits/stdc++.h>
using namespace std;

void swap (int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int partition (int* arr, int low , int high)
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

void quicksort(int* arr, int low, int high)
{
	if (low < high){
		int pi = partition(arr,low,high);
		quicksort (arr,low,pi-1);
		quicksort (arr,pi+1,high);
	}
	
}

int main()
{
	int n;
	cin >> n;
	int* a = (int*) calloc (n,sizeof(int));
	for (int i = 0; i < n; i++) cin >> *(a+i);
	quicksort(a,0,n-1);
	
	cout << *(a+n-2) << " " << *(a+1);
	return 0;
}