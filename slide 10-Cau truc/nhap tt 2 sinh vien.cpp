#include<stdio.h>
#include<stdlib.h>
struct SINHVIEN
{
	char msv[20];
	char hoten[30];
	float toan, tin, anh;
};

main()
{
	SINHVIEN sv1, sv2;
	printf("Nhap du lieu sinh vien 1: \n");
	printf("Nhap ma so sinh vien: \n");fflush(stdin);
	gets(sv1.msv);
	printf(" Nhap ho ten sinh vien: \n");fflush(stdin);
	gets(sv1.hoten);
	printf(" Nhap diem toan, tin, anh lan luot la: ");fflush(stdin);
	scanf("%f %f %f", &sv1.toan, &sv1.tin, &sv1.anh);
	printf("Nhap du lieu sinh vien 2: \n");
	printf("Nhap ma so sinh vien: \n");fflush(stdin);
	gets(sv2.msv);
	printf(" Nhap ho ten sinh vien: \n");fflush(stdin);
	gets(sv2.hoten);
	printf(" Nhap diem toan, tin, anh lan luot la: ");fflush(stdin);
	scanf("%f %f %f", &sv2.toan, &sv2.tin, &sv2.anh);
	printf("\n----------THONG TIN SINH VIEN-----------\n");
	printf("%-20s %-30s %-7s %-7s %-7s\n", "MSV", "HOTEN", "TOAN", "TIN", "ANH");
	printf("%-20s %-30s %-7.2f %-7.2f %-7.2f\n", sv1.msv, sv1.hoten, sv1.toan, sv1.tin, sv1.anh);
	printf("%-20s %-30s %-7.2f %-7.2f %-7.2f\n", sv2.msv, sv2.hoten, sv2.toan, sv2.tin, sv2.anh);
}
