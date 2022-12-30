/*so sanh a, b giong hay khac nhau*/
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
		printf("a, b bang nhau", a);
	else
		printf("a, b khac nhau", b);
	getch();
}
	
