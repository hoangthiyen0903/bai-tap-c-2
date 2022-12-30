#include<stdio.h>
#include<conio.h>

main()
{
	int nam;
	printf("Nhap vao nam:");
	scanf("%d", &nam);
	if(nam%4==0 && nam%100!=0)
		printf("%d la nam nhuan", nam);
	else
		printf("%d khong phai la nam nhuan", nam);
	getch();

}
