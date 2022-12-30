/*in ra ket qua ngay, thang, nam chi lay 2 so cuoi cua nam*/
#include<stdio.h>
#include<conio.h>

main()
{
	int date, month, year;
	printf("Nhap vao ngay/thang/nam:");
	scanf("%d/%d/%d", &date, &month, &year);
	printf("ket qua ngay/thang/nam la %d/%d/%.2d", date, month, year);
	
	getch();
}
	
