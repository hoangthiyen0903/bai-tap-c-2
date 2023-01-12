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
	int *p_gio, *p_phut;
	p_gio=&gio;
	p_phut=&phut;
	chuyendoi(p_gio, p_phut);
	printf("Gio:%d, phut: %d", gio, phut);
}
