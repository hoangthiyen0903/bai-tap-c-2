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
	if(a>b&&a>c)
		printf("So lon nhat la %d", a);
	else
		if(b>a&&b>c)
			printf("So lon nhat la %d", b);
		else
			printf("So lon nhat la %d", c);
	getch();
	

}
	
