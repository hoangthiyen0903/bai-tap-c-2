#include<stdio.h>
#include<conio.h>

 main()
{
	int numArray[10];
	int i, sum=0;
	int *ptr;
	
	
	for(i=0; i<10; i++)
	{
		printf("Nhap vao pt thu numArray[%d]", i);
		scanf("%d", &numArray[i]);
		
	}
	
	ptr=numArray; 
	for(i=0; i<10; i++)
	{
		sum=sum+*ptr;
		ptr++;
	}	
	printf("Tong cac pt mang la: %d", sum);
}
