/*viet ct*/

#include<stdio.h>
int gt(int i)
{
	int i, s=1;
	for(i=2; i<=n; i++)
		s=s*i;
	return s;
	
}
main()
{
	int a, b, c;
	printf("nhap a:");
	scanf("%d", a);
	printf("nhap b:");
	scanf("%d", b);
	printf("nhap c:");
	scanf("%d", c);
	printf("tong la %d", gt(a)+gt(b)+gt(c));
}
