/*in ra 4 toan tu*/

#include<stdio.h>
#include<conio.h>


main()
{
	float x, y;
	char toantu;
	printf("Nhap vao gia tri x: ");
	scanf("%f", &x);
	printf("Nhap vao gia tri y: ");
	scanf("%f", &y);
	printf("Nhap vao toan tu: ");
	scanf("%s", &toantu);
	
	switch(toantu)
	{
		case '+': printf("ket qua la x+y.\n"); break;
		case '-': printf("ket qua la x-y.\n"); break;
		case '*': printf("ket qua la x*y.\n"); break;
		case '/':	
			if(y==0)
				printf("khong chia duoc.\n");
			else
				printf("ket qua la x/y.\n"); break;
			
		
	}
	getch();
	

}
	

