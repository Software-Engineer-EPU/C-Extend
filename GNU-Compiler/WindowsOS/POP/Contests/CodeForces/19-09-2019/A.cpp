#include <bits/stdc++.h>
using namespace std;

long int Partition_with_Dynamic_Memory (long int* arr, long int low , long int high)
{
	long int pivot = *(arr+high);
	long int left = low;
	long int right = high - 1;
	while (true) {
		while (left <= right && *(arr+left) < pivot) left ++;
		while (right >= left && *(arr+right) > pivot) right --;
		// Thay đôi dấu " < " thành " > " tại dòng 53
		// Thay đôi dấu " > " thành " < " tại dòng 54
		// Để thay đổi các sắp xếp từ bé đến lớn thành từ lớn đến bé
		if (left >= right) break;
		swap(*(arr+left),*(arr+right));
		left ++;
		right --;
	}
		swap (*(arr+left),*(arr+high));
		return left;
}

void Quicksort_with_Dynamic_Memory(long int* arr, long int low, long int high)
{
	if (low < high){
		long int pi = Partition_with_Dynamic_Memory(arr,low,high);
		Quicksort_with_Dynamic_Memory (arr,low,pi-1);
		Quicksort_with_Dynamic_Memory (arr,pi+1,high);
	}
	
}

int main()
{
	//freopen("input.txt", "r", stdin);
	int q, n;
	long int *s = new long int[n];
	do cin >> q; while (q < 1 || q > 100); // q là số test || q = 6
	for (int i = 0; i < q; i++)
	{
		do cin >> n; while (n < 1 || n > 100); // n là số phần tử trong dãy
		for (int j = 0; j < n; j++)	
		{
			cin >> s[j];
		}


			
		Quicksort_with_Dynamic_Memory(s,0,n-1);

	//
	//	cout << "n = " << n << endl;
	//	for (int j = 0; j < n; j++) cout << "s[" << j << "] = " << s[j] << endl;
	//

		for (int j = 0; j < n - 1; j++)
		{
			if (s[j] == 2048 )
			{
				cout << "YES";
				break;
			}
			if (s[j] == s[j+1]) s[j+1] *= 2;
			if (s[j+1] == 2048)
			{
				cout << "YES" << endl;
				break;
			} 
			if (j == n -2 && s[j+1] != 2048) cout << "NO" << endl;
		}

		
		if (n == 1)
		{
			if (s[0] == 2048) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		

	//
	//	cout << endl << endl;
	//
	}
}