/*tra ve tong hai so nguyen a, b*/
#include<stdio.h>
int sum(int a, int b)
{
	int s;
	s=a+b;
	return s;
}
main()
{
	int a, b;
	printf("nhap a = ");
	scanf("%d", &a);
	printf("nhap b = ");
	scanf("%d", &b);
	printf("tong 2 so %d va %d la %d", a, b, sum(a,b));
}
