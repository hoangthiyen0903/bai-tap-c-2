#include<stdio.h>
#include<conio.h>

main()
{
	int a, b;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	printf("Nhap vao so b:");
	scanf("%d", &b);
	if(a==b)
		printf("a b giong nhau");
	else
		printf("a b khac nhau");
	getch();

}
