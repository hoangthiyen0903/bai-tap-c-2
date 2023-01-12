/*tong 2 so dung con tro*/
#include<stdio.h>
int main()
{
	int a=10;
	int b=15;
	
	int *ptr1, *ptr2;
	ptr1=&a;
	ptr2=&b;
	int num;
	
	num=*ptr1+*ptr2;
	
	printf("tong 2 so la: %d", num);
	return 0;
	
	
}
