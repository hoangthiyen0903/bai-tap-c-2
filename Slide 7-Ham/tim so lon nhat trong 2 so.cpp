/*tim so lon nhat trong 2 so*/

#include<stdio.h>
void solonnhat(float x, float y)
{
	if(x>y)
	{
		printf("%.0f lon nhat", x);
	}else{
		printf("%.0f lon nhat", y);
	}	
	
}
main()
{
	float a, b;
	printf("nhap a = ");
	scanf("%f", &a);
	printf("nhap b = ");
	scanf("%f", &b);
	
	solonnhat(a,b);
}
