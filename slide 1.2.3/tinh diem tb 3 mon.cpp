/*chuong trinh nhap vao diem Toan, Ly, Hoa. Tinh diem trung binh*/
#include<stdio.h>
#include<conio.h>

main()
{
	float T, L, H;
	printf("Nhap vao diem Toan: ");
	scanf("%f", &T);
	printf("Nhap vao diem Ly: ");
	scanf("%f", &L);
	printf("Nhap vao diem Hoa: ");
	scanf("%f", &H);
	printf("Diem trung binh T, L, H la %2f.\n", (T+L+H)/3);
	getch();
	

}


