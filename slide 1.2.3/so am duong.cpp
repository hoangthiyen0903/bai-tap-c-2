#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	if(a>0)
		printf("a la so duong");
	else
		if(a==0)
		printf("a khong la so duong, khong la so am");
		else
		printf("a la so am");
	getch();
}
