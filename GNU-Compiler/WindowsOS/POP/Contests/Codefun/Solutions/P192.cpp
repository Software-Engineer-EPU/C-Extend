#include <bits/stdc++.h>
using namespace std;

void swap (int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubblesort(int arr[], int n)
{
 	for (int i = 0; i < n - 1; i++) 
		for (int j = 0; j < n - i - 1; j++) 
			if (arr[j] > arr[j + 1]) swap(arr[j],arr[j+1]);
}

int main()
{
	int a[6], dem = 1;
	for (int i = 0; i < 5; i++) cin >> a[i];
	bubblesort(a,5);
	int max = 1, smax = a[0];
	for (int i = 0; i < 5; i++)
		if(a[i] == a[i+1]) dem++;
		else {
			if (max <= dem) {
				max = dem;
				smax = a[i];
			}
		}
	cout << smax;
}