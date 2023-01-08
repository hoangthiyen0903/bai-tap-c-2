/*kiem tra password*/
#include<stdio.h>
#include<conio.h>
#define PASSWORD 12345


main()
{
	int in;
	do
	{	
		printf("Nhap vao mat khau:");
		scanf("%d", &in);
		
	}
	while(in!=PASSWORD);
	
printf("WELLCOME");
 getch();
}
	
