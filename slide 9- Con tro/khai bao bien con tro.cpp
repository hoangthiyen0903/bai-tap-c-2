/*khai bao bien con tro*/
#include<stdio.h>
main()
{
	int tuoi=10;
	int *ptuoi=NULL;
	ptuoi=&tuoi;
	printf("gia tri bien tuoi la: %d", tuoi);
	printf("\ngia tri bien con tro la: %d", *ptuoi);
	printf("\ndia chi bien tuoi la: %d", &tuoi);
	printf("\ndia chi bien con tro la: %d", ptuoi);
}
