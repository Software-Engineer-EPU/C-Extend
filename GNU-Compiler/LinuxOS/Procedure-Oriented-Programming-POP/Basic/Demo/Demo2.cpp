/* Code by KingNNT */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

float g1 (int k)
{
	return pow(k,2) - 1.8 * sin(k) + 1.7;
}

float g2 (int k)
{
	return cos (k - 1) + 1.78 * pow(k,3) - 1.86;
}

int main()
{
	int a,b;
	printf("Nhap a b: ");
	scanf("%d%d",&a,&b);
	float ga, gb;
	if (a < 1) ga = g1(a); else ga = g2(a);
	if (b < 1) gb = g1(b); else ga = g2(b);
	printf("Gia tri k \t Gia tri ham g tai k\n");
	printf("%d \t %f\n",a,ga);
	printf("%d \t %f\n",b,gb);    
}