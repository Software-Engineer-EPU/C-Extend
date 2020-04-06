#include <bits/stdc++.h>
using namespace std;

/* Code by KingNNT */

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
	//cout << "Mang sau khi sap xep la: ";
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int arr[] = {a,b,c};
	int n = sizeof(arr)/sizeof(arr[0]);

	//cout << "Mang ban dau la: ";
	//for (int i = 0; i < n; ++i) cout << arr[i] << " ";
	//cout << endl;

	quicksort(arr,0,n-1);
	printArr(arr, n);
	return 0;
}