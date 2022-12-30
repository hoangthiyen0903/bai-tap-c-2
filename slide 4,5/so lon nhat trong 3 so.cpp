/*In ra kq so lon nhat khi nhap 3 so*/

#include<stdio.h>
#include<conio.h>


main()
{
	int a, b, c;
	printf("Nhap vao so a=");
	scanf("%d", &a);
	printf("Nhap vao so b=");
	scanf("%d", &b);
	printf("Nhap vao so c=");
	scanf("%d", &c);
	if(a>b)
	{	
		if(a>c)
			printf("gt lon nhat la %d", a);
		else
			printf("gt lon nhat la %d", c);
	}
	else
	{
		if(b>c)
			printf("gt lon nhat la %d", b);
		else
			printf("gt lon nhat la %d", c);
	}	
	getch();
	

}
	
