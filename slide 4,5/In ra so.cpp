/*in ra so*/

#include<stdio.h>
#include<conio.h>


main()
{
	int i;
	printf("Nhap vao so: ");
	scanf("%d", &i);
	
	switch(i)
	{
		case 1: 
			printf("Ban vua nhap so Mot");
			break;
		case 2: 
			printf("Ban vua nhap so Hai");
			break;
		case 3: 
			printf("Ban vua nhap so Ba"); 
			break;
		case 4: 
			printf("Ban vua nhap so Bon"); 
			break;
		case 5: 
			printf("Ban vua nhap so Nam"); 
			break;
		default:printf("Ban phai nhap so 1->5");
	};
	
	
}
	

