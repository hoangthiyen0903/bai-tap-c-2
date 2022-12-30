/*in ra ket qua ngay, thang, nam*/
#include<stdio.h>
#include<conio.h>

main()
{
	int date, month, year;
	printf("Nhap vao ngay:");
	scanf("%02d", &date);
	printf("Nhap vao thang:");
	scanf("%02d", &month);
	printf("Nhap vao nam:");
	scanf("%04d", &year);
	printf("ket qua ngay/thang/nam la: %02d/%02d/%04d", date, month, year);

	
	getch();
}
	
