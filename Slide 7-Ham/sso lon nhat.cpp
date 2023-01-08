#include<stdio.h>
#include<conio.h>

#define MAX(x, y) (x>y)?x:y
 main()
{
	float a=4.5, b=6.1;
	printf("so lon nhat la %5.2f\n", MAX(a, b));
	getch();
}
