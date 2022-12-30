/*in ra ket qua ngay, thang, nam*/
#include<stdio.h>
#include<conio.h>

main()
{
	int giay;
	printf("Nhap vao so giay:");
	scanf("%d", &giay);
	
	printf("ket qua gio:phut:giay la: %02d:%02d:%02d", giay/3600, giay%3600/60, giay%3600%60);
	getch();
}
	
	
	
	
