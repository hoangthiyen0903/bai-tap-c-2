/*in ra tong binh phuong so chan tu 1 den n*/
#include<stdio.h>


main()
{
	int i, n, sum=0;
	printf("Nhap vao n:");
	scanf("%d", &n);
	for(i = 2; i<=n; i+=2)
	{	
		sum=sum+i*i;
	}
	printf("tong binh phuong so chan 1 den n la: %d\n", sum);
	
}
	
