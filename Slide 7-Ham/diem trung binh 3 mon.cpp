/*viet chuong trinh xay dung ham tinh diem trung binh 3 mon t,l,h*/
#include<stdio.h>
void avg(float x, float y, float z)
{
	printf("Diem trung binh 3 mon %.0f va %.0f va %.0f la %.0f", x, y, z, (x+y+z)/3);
}
main()
{
	float Toan, Ly, Hoa;
	printf("nhap Toan = ");
	scanf("%f", &Toan);
	printf("nhap Ly = ");
	scanf("%f", &Ly);
	printf("nhap Hoa = ");
	scanf("%f", &Hoa);
	avg(Toan, Ly, Hoa);
}
