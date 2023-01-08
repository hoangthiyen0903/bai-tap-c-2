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

/*tim max*/

int timmax(int a[], int n)
{
	int max = a[0];
	
	for (int i=1; i<n; i++)
		
		if(a[i]>max)
			max=a[i];
		return printf("gia tri lon nhat la %d \n", max);
	
}

/*tim min*/

int timmin(int a[], int n)
{
	int min = a[0];
	
	for (int i=1; i<n; i++)
		
		if(a[i]<min)
			min=a[i];
		return printf("gia tri nho nhat la %d \n", min);
	
}


/*sap xep tang*/
void sapxeptang(int a[], int n)
{
	int i, j, tam;
	for (i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		
		}
	
	}
printf("mang sau khi sap xep tang la: ");
xuatmang(a, n);
}



/*sap xep giam*/
void sapxepgiam(int a[], int n)
{
	int i, j, tam;
	for (i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]<a[j])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		
		}
	
	}
printf("\n mang sau khi sap xep giam la: ");
xuatmang(a, n);
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
	
	timmax(a, n);
	timmin(a, n);
	
	sapxeptang(a, n);
	sapxepgiam(a, n);
}
