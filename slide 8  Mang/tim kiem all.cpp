/*tong cac so le mang*/
#include<stdio.h>
void nhapmang(int a[], int n)
{
	int i;
	for (int i=0; i<n; i++)
		{
			printf("nhap vao cac phan tu le thu a[%d] :", i);
			scanf("%3d", &a[i]);
		}
}
void xuatmang(int a[], int n)
{
	int i;
	for (int i=0; i<n; i++)
		
		printf("%3d", a[i]);
	
}



void sum(int a[], int n)
{
	int s=0;
	
	for (int i=0; i<n; i++)
	{	
		if(a[i]%2==0)
		s=s+a[i];
	}
	printf("/n Tong cac so le le cua mang la %d \n", s);
}

/*tim kiem all*/

int timkiemall(int a[], int n, int x)
{
	int i, dem=0;
	
	for (i=0; i<n; i++)
	{	
		if(a[i]==x)
		{
		dem++;
		return printf("/n vi tri can tim a[%d]", i);
		}
	}
	if(dem==0)
		printf("\n ko tim thay")

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
	int x; 
	printf(" nhap gia tri can tim:  ");
	scanf("%3d", &x);
	timkiem(a, n, x);
	timkiemall(a, n, x);
		return 0;
}
}
