/*khai bao bien con tro*/
#include<stdio.h>
int main()
{
	int bien=10;
	int *contro;
	contro=&bien;
	printf("dia chi  bien  la: %x\n", &bien);
	printf("dia chi  luu trong bien con tro la: %x\n", contro);
	printf("gia tri bien *contro la: %d\n", *contro);
	printf("\n------------------\n");
	
}
