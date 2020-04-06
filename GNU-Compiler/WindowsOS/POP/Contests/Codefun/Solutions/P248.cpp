/* Code by KingNNT */

#include <bits/stdc++.h>
using namespace std;

void swap (int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int partition (int arr[], int low , int high)
{
	int pivot = arr[high];
	int left = low;
	int right = high - 1;
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

void quicksort(int arr[], int low, int high)
{
	if (low < high){
		int pi = partition(arr,low,high);
		quicksort (arr,low,pi-1);
		quicksort (arr,pi+1,high);
	}
	
}

void printArr(int arr[], int size)
{
	cout << "Mang sau khi sap xep la: ";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int n, arr[105], brr[105];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		brr[i] = arr [i];
	}
	quicksort(arr,0,n-1);


	//printArr(arr, n);
	//cout << arr[n-2] << " " << arr[n-1];
	for (int i = 0; i < n; i++) {
		if (brr[i] == arr[n-2]) {
			cout << i+1 << " ";
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (brr[i] == arr[n-1]) {
			cout << i+1 << " ";
			break;
		}
	}
	return 0;
}