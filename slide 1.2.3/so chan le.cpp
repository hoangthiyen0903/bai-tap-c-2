#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	if(a%2==1)
		printf("%d la so le", a);
	else
		printf("%d la so chan", a);
	getch();

}
