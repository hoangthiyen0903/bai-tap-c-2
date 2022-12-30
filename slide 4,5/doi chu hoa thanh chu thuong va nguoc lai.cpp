/*In chu hoa ra chu thuong va nguoc lai*/

#include<stdio.h>
#include<conio.h>


main()
{
	char c;
	printf("Nhap vao ki tu : ");
	scanf("%c", &c);
	
	if(c>='a'&&c<='z')
	{
		c=c-32;
		printf("ki tu vua nhap chuyen sang chu hoa la %c.\n ", c);
	}
	else if(c>='A'&&c<='Z')
	{
		c=c+32;
		printf("ki tu vua nhap chuyen sang chu thuong la %c.\n", c);
	}
	else if(c>='0'&&c<='9')
		printf("Ki tu ban vua nhap la so %c.\n", c);
	
	else
		printf("Ban da nhap ki tu %c.\n", c);
	getch();
	

}
	
