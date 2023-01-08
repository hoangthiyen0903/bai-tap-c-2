/*tim so lon nhat trong 3 so*/

#include<stdio.h>
void solonnhat(float x, float y, float z)
{
	if(x>y&&x>z)
		printf("So lon nhat la %.0f", x);
	else
		if(y>x&&y>z)
			printf("So lon nhat la %.0f", y);
		else
			printf("So lon nhat la %.0f", z);
	
}
main()
{
	float a, b, c;
	printf("nhap a = ");
	scanf("%f", &a);
	printf("nhap b = ");
	scanf("%f", &b);
	printf("nhap c = ");
	scanf("%f", &c);
	solonnhat(a, b, c);
}
