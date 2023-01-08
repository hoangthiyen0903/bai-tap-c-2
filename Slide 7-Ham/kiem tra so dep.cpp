/*ham ko mang gt tra ve co truyen tham so*/
#include<stdio.h>
int kiemtrasodep(int n)
{
	if(n%2==0 && n%5==0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int x;
	printf("Nhap x vao:");
	scanf("%d", &x);
	if(kiemtrasodep(x) == 0)
	{
		printf("Day khong phai la so dep \n");
	}else{
		printf("Day la so dep");
	}
	return 0;
}
