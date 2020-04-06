#include <bits/stdc++.h>
using namespace std;

void swap (int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}


//<---------------------------------------------------->//

int Partition (int arr[], int low , int high)
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

void Quicksort(int arr[], int low, int high)
{
	if (low < high){
		int pi = Partition(arr,low,high);
		Quicksort (arr,low,pi-1);
		Quicksort (arr,pi+1,high);
	}
	
}



int main()
{
	string s,x;
	int a[60];
	fflush(stdin); getline(cin,s);

	for (int i = 0; i < s.length(); i++) {
		x = s[i];
		stringstream str_to_num(x);
		str_to_num >> a[i];
	}

	Quicksort(a,0,s.length() - 1);

	int dem = 0, k;
	
	for (int i = s.length() - 1; i >= 0; i--) {
		cout << a[i];
		if (a[i] == 0) dem++;
	}
	cout << endl;

	
	for (int i = 0; i < s.length(); i++)
		if (a[i] != 0) {
			cout << a[i];
			k = i;
			break;
	}
	//cout << endl << "k = " << k << endl << "dem = " << dem << endl;
	for (int j = 0; j < dem; j++) cout << 0;
	for (int j = k + 1; j < s.length(); j++) cout << a[j];
	return 0;
}