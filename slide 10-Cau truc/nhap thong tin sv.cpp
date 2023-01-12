#include<stdio.h>
struct SINHVIEN
{
	char ht[25], lop[10];
	float dtb;
};

main()
{
	SINHVIEN sv;
	printf("Nhap vao Ho ten sinh vien: \n");
	gets(sv.ht);
	printf("Nhap vao lop sinh vien: \n");
	gets(sv.lop);
	printf("Nhap vao diem trung binh sinh vien: \n");
	scanf("%f", &sv.dtb);
	printf(" Ho ten sinh vien: %s \n", sv.ht);
	printf(" lop sinh vien: %s \n", sv.lop);
	printf(" Diem tb sinh vien: %0.2f \n", sv.dtb);
}
