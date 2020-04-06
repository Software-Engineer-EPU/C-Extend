#include <bits/stdc++.h>
using namespace std;
/* Code by KingNNT */

#include <bits/stdc++.h>
using namespace std;

void swap (int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int Partition_with_Dynamic_Memory (int* arr, int low , int high)
{
	int pivot = *(arr+high);
	int left = low;
	int right = high - 1;
	while (true) {
		while (left <= right && *(arr+left) > pivot) left ++;
		while (right >= left && *(arr+right) < pivot) right --;
		if (left >= right) break;
		swap(*(arr+left),*(arr+right));
		left ++;
		right --;
	}
		swap (*(arr+left),*(arr+high));
		return left;
}

void Quicksort_with_Dynamic_Memory(int* arr, int low, int high)
{
	if (low < high){
		int pi = Partition_with_Dynamic_Memory(arr,low,high);
		Quicksort_with_Dynamic_Memory (arr,low,pi-1);
		Quicksort_with_Dynamic_Memory (arr,pi+1,high);
	}
	
}


//<---------------------------------------------------------------------->//
int main()
{
	string s;
	fflush(stdin);
	getline(cin,s);
	int dem = 0;
	int*a = (int*) calloc (s.length(),sizeof(int));
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'D') dem++;
		else {
			*(a+i) = dem;
			dem = 0;
		}
	Quicksort_with_Dynamic_Memory(a,0,s.length()-1);
	cout << *a + *(a+1);
}