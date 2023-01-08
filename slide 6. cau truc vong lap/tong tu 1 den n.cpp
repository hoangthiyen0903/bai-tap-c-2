/*in ra kq tong so nguyen tu 1 den n*/
#include<stdio.h>


main()
{
	int i, n, sum=0;
	printf("Nhap vao n:");
	scanf("%d", &n);
	for(i = 1; i<=n; i++)
	{	
		sum=sum+i;
	}
	printf("tong cac so tu 1 den n la: %d\n", sum);
	
}
	
