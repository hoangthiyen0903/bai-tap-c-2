#include<stdio.h>
#include<conio.h>

main()
{
	int a, b;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	printf("Nhap vao so b:");
	scanf("%d", &b);
	if(a>b)
		printf("%d la so lon nhat", a);
	else
		printf("%d la so lon nhat", b);
	getch();

}
