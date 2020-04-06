/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

// Phần include này chắc OK nhỉ bỏ đi nhá

int main()
{
    int m;
    float b[30],temp;
    do
    {
    	printf("Nhap m: "); scanf ("%d",&m);
    }
    while (m <= 2 || m > 20);
    for (int i = 0; i < m; i++) scanf ("%f",&b[i]);
    for (int i = 0; i < m; i++)
    {
    	printf("%4.1f", b[i]);
    	if ((i +1) == 0) printf("\n");
    }


    //////// Làm từ đây Không cần khai báo n
    printf("\nSO PHAN TU CO GIA TRI <= 3.15 LA: ");
    for (int i = 0; i < m; i++)
    	if (b[i] <= 3.15) printf("%f ", b[i]);

 	for (int i = 0; i < m - 1; i++) 
		for (int j = 0; j < m - i - 1; j++) 
			if (b[j] > b[j + 1])
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}

    printf("\nMang sau khi sap xep: ");
    for (int i = 0; i < m; i++) printf("%f ", b[i]);
}