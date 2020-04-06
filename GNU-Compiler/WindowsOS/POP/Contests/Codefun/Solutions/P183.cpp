//Submit cho P143

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
	int arr[6];
	for ( int i = 0; i < 5; i++) cin >> arr[i];
	int n = sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n-1);

	if ((arr[0] == arr[1] == arr[2] == arr[3]) || (arr[1] == arr[2] == arr[3] == arr[4])) cout << 1;
	else cout << 0;
	return 0;
}


/*
int main()
{
	int a[6], dem = 0;
	bool bl = true;
	for ( int i = 0; i < 5; i++) cin >> a[i];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			if (a[i] != a[j]) bl = false;
		if (bl == false) dem++;
		if (dem >= 2) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}
*/