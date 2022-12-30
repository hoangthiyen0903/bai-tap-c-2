#include <stdio.h>
#include<conio.h>

main()
 {	
 	int checkin, checkout, sum;
 	printf("nhap vao checkin");
 	scanf("%d", &checkin);
 	printf("nhap vao checkout");
 	scanf("%d", &checkout);
 	sum=checkout-checkin;
 	
 	if(sum>7)
 	{
 		printf("so tien phai tra %.2d", sum%7*100+sum/7*650);
 	}else{
 		printf("So tien phai tra la %.2d", sum*100);
 	}
 	getch();
 } 		
