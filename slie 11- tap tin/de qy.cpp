#include<stdio.h>
#include<conio.h>
long giaithua(int in)
{
	int i;
	if(in==0)
		return(1);
	else
		return(in*giaithua(in-1));
}
main()
{
	int in;
	long giaithua(int);
	printf("Nhap vao so n:");
	scanf("%d", &in);
	printf("%d!=%1d\n", in, giaithua(in));
	getch();
	
}
