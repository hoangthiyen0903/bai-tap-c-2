#include<stdio.h>
#include<conio.h>

main()
{
	int a, b, tam;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	printf("Nhap vao so b:");
	scanf("%d", &b);
	tam=a;
	a=b;
	b=tam;
	printf("Gia tri hoan vi la: \n a = %d \n b = %d", a, b);
	getch();
}




