/*nhap, xuat dl mang*/
#include<stdio.h>
void nhapmang(int a[], int n)
{
	int i;
	for (int i=0; i<n; i++)
		{
			printf("nhap vao cac phan tu thu a[%d]", i);
			scanf("%3d", &a[i]);
		}
}
void xuatmang(int a[], int n)
{
	int i;
	for (int i=0; i<n; i++)
		printf("%3d", a[i]);
	
}
main()
{
	int n; 
	printf("nhap n tu mang");
	scanf("%3d", &n);
	int a[n];
	nhapmang(a[n]);
	xuatmang(a[n]);
}
