/*in ra toan tu so hoc*/

#include<stdio.h>
#include<conio.h>


main()
{
	float x, y;
	char pheptoan;
	printf("Nhap vao x= ");
	scanf("%f", &x);
	printf("Nhap vao y= ");
	scanf("%f", &y);
	printf("Nhap vao pheptoan ");
	scanf("%s", &pheptoan);
	
	switch(pheptoan)
	{
		case '+':
			printf("tong la %.2f", x+y);
			break;
		case '-':
			printf("Hieu la %.2f", x-y);
			break;
			case '*':
			printf("tich la %.2f", x*y);
			break;
		case '/':
			if(y==0)
				printf("Khong chia duoc");
			else
				printf("ket qua phep chia la %f", x/y);
		
	}
	getch();
}
