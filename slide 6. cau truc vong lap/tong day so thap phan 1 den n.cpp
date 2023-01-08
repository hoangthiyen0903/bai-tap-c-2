/*in ra tong S=1+1/2+1/3+...+1/n*/
#include<stdio.h>


main()
{
	int i, n, sum=0;
	printf("Nhap vao n:");
	scanf("%d", &n);
	for(i = 1; i<=n; i+=1)
	{	
		sum=sum+1/i;
	}
	printf(" tong S=1+1/2+1/3+...+1/n la: %d\n", sum);
	
}
	
