/*chuong trinh nhap chieu dai, chieu rong va in ra chu vi, dien tich*/
#include<stdio.h>
#include<conio.h>

main()
{
	int a, b;
	printf("Nhap vao chieu dai:");
	scanf("%d", &a);
	printf("Nhap vao chieu rong:");
	scanf("%d", &b);
	printf("Chu vi hinh chu nhat la %d. \n", (a+b)*2);
	printf("Dien tich hinh chu nhat la %d. \n", a*b);
	getch();
}
	
