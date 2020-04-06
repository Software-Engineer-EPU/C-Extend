#include <bits/stdc++.h>
using namespace std;
void swap (int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Bubblesort(long long int arr[], int n)
{
 	for (int i = 0; i < n - 1; i++) 
		for (int j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) swap(arr[j],arr[j+1]);
}
int main()
{
	long long int arr[5];
	for (int i = 0; i < 3; i++) cin >> arr[i];
	Bubblesort(arr,3);
	cout << arr[1];
}