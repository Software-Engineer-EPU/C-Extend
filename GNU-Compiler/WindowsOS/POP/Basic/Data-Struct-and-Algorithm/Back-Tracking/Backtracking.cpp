// Xét bài toán in chuỗi nhị phân
// https://www.youtube.com/watch?v=CBXlJcPqj1w
#include <bits/stdc++.h>
using namespace std;

int a[100];
int n = 2; // Chuỗi nhị phân gồm n kí tự

void _printf()
{
	for (int i = 1; i <= n; i++)	// Lưu ý phải chạy từ a[1] -> a[n]
		cout << a[i];
	cout << endl;
}

void _try(int i)
{
	for (int j = 0; j <= 1; j++) // Duyệt các kết quả có thể thử
	{
		a[i] = j;
		if (i == n)				// Nếu đây là vị trí thử cuối cùng
			_printf();
		else _try(i+1);
	}
}

int main()
{
	_try(1); // Bắt buộc phải từ 1;
}