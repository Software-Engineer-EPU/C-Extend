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
	int a[6];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	bubblesort(a,5);

	if (a[0] == a[1] == a[2] && a[3] == a[4] && a[2] != a[3]) cout << "YES";
	else if (a[0] == a[1]  && a[2] == a[3] == a[4] && a[1] != a[2]) cout << "YES";
		else cout << "NO";
}