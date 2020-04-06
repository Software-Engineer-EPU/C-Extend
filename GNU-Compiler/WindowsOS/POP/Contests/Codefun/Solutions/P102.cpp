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
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int arr[] = {a,b,c,d};
	int n = sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);
	cout << arr[1];
	return 0;
}