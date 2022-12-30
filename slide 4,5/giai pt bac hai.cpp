/*giai pt bac hai*/
#include <stdio.h>
#include<conio.h>
#include<math.h>
main()
 {	
 	float a, b, c, delta;
 	printf("nhap vao so a");
 	scanf("%f", &a);
 	printf("nhap vao so b");
 	scanf("%f", &b);
 	printf("nhap vao so c");
 	scanf("%f", &c);
 	
 	
 	if(a==0)
 	{
 		if(b==0)
 		{
		 	if(c==0)
 				printf("pt co vo so nghiem");
 			else
 				printf("pt vo nghiem");
 		}else
 		printf("pt co nghiem la %.2f", -c/b);
 	}else
	{
		delta=b*b-4*a*c;
		if(delta==0)
			printf("pt co nghiem kep la %.2f", -b/2*a);
		else if(delta>0)
			printf("pt co 2 nghiem phan biet la %.2f %.2f", (-b+sqrt(delta))/2*a, (-b-sqrt(delta))/2*a );
		else
			printf("phuong trinh vo nghiem");
	}	
 	getch();
 } 		
