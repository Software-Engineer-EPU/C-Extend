#include <bits/stdc++.h>
using namespace std;
int main()
{
	// Cấp phát bộ nhớ động cho ma trận m x n
	// Cách này phức tạp nhưng bạn sẽ có 1 mảng 2 chiều đúng nghĩa và có thể lấy phần tử bằng cách gọi a[i][j] thông thường như mảng tĩnh.
	int **a = new int*[m];
	for(int i = 0; i < m; i++) a[i] = new int[n];
		


	// Giải phóng bộ nhớ động cho ma trận
	for(int i = 0; i < m; i++) delete []a[i];
	delete []a;
}