/*in ra so tien luong,neu so h lam >40 thi nhung h doi ra tinh 1.5 lan*/

#include<stdio.h>
#include<conio.h>


main()
{
	float h, luong1h;
	printf("h= :");
	scanf("%f", &h);
	printf("luong1h= : ");
	scanf("%f", &luong1h);
	
	if(h>40)
		printf("so tien luong nhan dc la: %.0f", (h-40)*luong1h*1.5+40*luong1h);
	else
		printf("so tien luong nhan dc la: %.0f", h*luong1h);
	getch();
	
}
	

