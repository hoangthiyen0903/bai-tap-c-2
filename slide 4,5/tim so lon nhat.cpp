/*tim so lon nhat*/
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
		printf("So lon nhat la a", a);
	else
		if(a==b)	
			printf("a va b bang nhau", a);
		else
			printf("b la so lon nhat", b);
	getch();
}
	
