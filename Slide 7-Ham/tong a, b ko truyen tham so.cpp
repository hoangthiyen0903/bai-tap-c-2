/*tra ve tong hai so nguyen a, b ko mang gt tra ve void, ko truyen tham so*/
#include<stdio.h>
void sum()
{
	int a, b;
	printf("Nhap so a:");
	scanf("%d", &a);
	printf("Nhap so b:");
	scanf("%d", &b);
	printf("Tong %d va %d la %d", a, b, a+b);
}
main()
{
	sum();
	
}
