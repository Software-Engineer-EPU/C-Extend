#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	do cin >> n; while ( n > 1000);
	int *a = (int*)calloc(n,sizeof(int));
	for (i = 0; i < n; i++) cin >> *(a+i);
	cout << *a << endl << *(a+i-1);
}

// Nghi vấn test sida
// Đã thử thêm while trên TH n < 2 và do while để n <= 1000000