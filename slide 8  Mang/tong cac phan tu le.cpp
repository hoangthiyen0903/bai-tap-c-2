/*tong cac so le mang*/
#include<stdio.h>
void nhapmang(int a[], int n)
{
	int i;
	for (int i=1; i<n; i=i+2)
		{
			printf("nhap vao cac phan tu le thu a[%d] :", i);
			scanf("%3d", &a[i]);
		}
}
void xuatmang(int a[], int n)
{
	int i;
	for (int i=1; i<n; i=i+2)
		printf("%3d", a[i]);
	
}
void sum(int a[], int n)
{
	int s=0;
	
	for (int i=1; i<n; i=i+2)
	{	
		s=s+a[i];
	}
	printf("/n Tong cac phan tu le cua mang la %d", s);
}
main()
{
	int n; 
	printf("nhap n tu mang:  ");
	scanf("%3d", &n);
	int a[n];
	nhapmang(a,n);
	xuatmang(a,n);
	sum(a, n);
}
