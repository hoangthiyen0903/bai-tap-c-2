/*tang gt con tro*/
#include<stdio.h>

int main()
{
	int x, *px, *qx;
	px=&x;
	printf("Nhap gt cho vung nho px tro toi: ");
	scanf("%d", px);
	
	qx=px;
	printf("Vi tri bien x la %p \n:", &x);
	printf("Vi tri bien x la %p \n:", px);
	printf("Vi tri bien x la %p \n:", qx);
	printf("Noi dung bien x la %d \n:", x);
	printf("Noi dung bien x la %d \n:", *px);
	printf("Noi dung bien x la %d \n:", *qx);
	
	*px+=7826;
	printf("Noi dung bien x la %d \n:", x);
	
	px++;
	printf("vi tri px tro toi la  %p \n:", px);
	return 0;
	


}
