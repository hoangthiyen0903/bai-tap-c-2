/*in ra kq tong so le 1 den n*/
#include<stdio.h>


main()
{
	int i, n, sum=0;
	printf("Nhap vao n:");
	scanf("%d", &n);
	for(i = 1; i<=n; i+=2)
	{	
		sum=sum+i;
	}
	printf("tong cac so le tu 1 den n la: %d\n", sum);
	
}
	
