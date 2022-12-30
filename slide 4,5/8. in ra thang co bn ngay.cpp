/*in ra thang co bao nhieu ngay*/

#include<stdio.h>
#include<conio.h>


main()
{
	int thang, nam;
	printf("Nhap vao thang: ");
	scanf("%d", &thang);
	printf("Nhap vao nam: ");
	scanf("%d", &nam);
	switch(thang)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10:
		case 12:
			printf("Thang co 30 ngay.\n"); 
			break;
		case 4: 
		case 6: 
		case 9:
		case 11: 
			printf("Thang co 31 ngay.\n"); 
			break;
		case 2:
			if(nam%4==0){
				printf("Thang co 29 ngay.\n");
			}else{
				printf("Thang co 28 ngay.\n"); 	
			}
			break;
	}
	getch();
	
}
	

