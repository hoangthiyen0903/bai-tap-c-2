/*in ra gt lon nhat*/
#include<stdio.h>
#include<conio.h>

main()
{
	int a, b, max;
	printf("Nhap vao a= ");
	scanf("%d", &a);
	printf("Nhap vao b= ");
	scanf("%d", &b);
	max=a;
	if(b>a)
		max=b;
		printf("so lon nhat la %d", max);
	getch();
}
	
	
	
	
