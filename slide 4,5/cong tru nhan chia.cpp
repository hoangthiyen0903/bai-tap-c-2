#include<stdio.h>
#include<conio.h>

main()
{
	float a, b;
	printf("Nhap vao so a:");
	scanf("%f", &a);
	printf("Nhap vao so b:");
	scanf("%f", &b);
	printf("ket qua cong, tru, nhan, chia hai so a va b la %.2f %.2f %.2f %.2f", a+b, a-b, a*b, a/b);
	getch();
}
