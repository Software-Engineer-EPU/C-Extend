#include <bits/stdc++.h>
using namespace std;
void swap (int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void bubblesort(int arr[], int n) {
 	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j],arr[j+1]);
		}
	}
}
int main()
{
	int arr[6],dem = 1, max = 1;
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	bubblesort(arr,5);
	for (int i = 0; i < 5; i++)
		if (arr[i] == arr[i +1]) dem++;
		else {
			if (max < dem) max = dem;
			dem = 1;
		}
	if (max == 3) cout << "YES"; else cout << "NO";
}