#include<stdio.h>
void chuyendoi(int *gio, int *phut)
{
	while(*phut>=60)
	{
		(*phut)-=60;
		++(*gio);
	}
}
main()
{
	int gio, phut;
	printf("Nhap vao gio la:");
	scanf("%d", &gio);
	printf("Nhap vao phut la:");
	scanf("%d", &phut);
	chuyendoi(&gio, &phut);
	printf("Gio:%d, phut: %d", gio, phut);
}
