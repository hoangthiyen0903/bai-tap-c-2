#include<stdio.h>
#include<conio.h>

main()
{
	float USD;
	printf("Nhap vao USD: ");
	scanf("%d", &USD);
	
	printf("Doi tu USD sang VND la . \n",USD , 25*USD);
	getch();
}
