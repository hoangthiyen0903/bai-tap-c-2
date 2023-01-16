/*khai bao kieu dl sinh vien co cac truong ho ten, gioi tinh, tuoi, diem toan, ly, hoa, va diem trung binh*/
/*Nhap vao ds N sinh vien*/
/*Xuat ds N sinh vien*/
/*Tinh diem ttrung binh N sinh vien*/
/*Sap xep N sinh vien theo thu tu tang dan diem trung binh*/
/*Xep loai N sinh vien*/
/*Xuat ds N sinh vien ra file*/
/*Viet ct dung menu cho phep su dung cac tinh nang*/

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>

/*khai bao kieu dl sinh vien co cac truong ho ten, gioi tinh, tuoi, diem toan, ly, hoa, va diem trung binh*/
struct SinhVien{
	char ten[30];
	char gt[5];
	int age;
	float dT, dL, dH;
	float dtb=0;
};
 typedef SinhVien SV;
void tinhDTB(SV &sv)
{
	sv.dtb=(sv.dT+sv.dL+sv.dH)/3;
}

/*Nhap vao ds N sinh vien*/
void nhap(SV &sv)
{
	printf("\nNhap ten: "); fflush(stdin);
	gets(sv.ten);
	printf("\nNhap gioi tinh: "); 
	gets(sv.gt);
	printf("\nNhap tuoi: "); 
	scanf("%d", &sv.age);
	printf("\nNhap dem 3 mon: "); 
	scanf("%f%f%f", &sv.dT, &sv.dL, &sv.dH);
	tinhDTB(sv);
	
}

void nhapN(SV a[], int n)
{
	printf("\n----------------------------\n");
	for(int i=0; i<n; ++i)
	{
		printf("Nhap sinh vien thu %d: ", i+1);
		nhap(a[i]);
	}
	printf("\n----------------------------\n");
}

/*Xuat ds N sinh vien*/
void xuat(SV &sv)
{
	printf("\nHo ten SV: %s", sv.ten);
	printf("\nGioi tinh SV: %s", sv.gt);
	printf("\nTuoi SV: %s", sv.age);
	printf("\nDiem Toan Ly Hoa: %.2f -%.2f -%.2f", sv.dT, sv.dL, sv.dH);
	printf("\nDiem trung binh la: %.2f", sv.dtb);
	
}
void xuatN(SV a[], int n)
{
	printf("\n----------------------------\n");
	for(int i=0; i<n; ++i)
	{
		printf("Thong tin sinh vien thu %d: ", i+1);
		xuat(a[i]);
	}
	printf("\n----------------------------\n");
}

/*Sap xep N sinh vien theo thu tu tang dan diem trung binh*/
void sapxep(SV a[], int n)
{
	SV tmp;
	for(int i=0; i<n; ++i)
	{
		for(int j=i+1; j<n; ++j)
		{
			if(a[i].dtb>a[j].dtb)
			{
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	
}
/*Xep loai N sinh vien*/
void xeploai(SV &sv)
{
	if(sv.dtb>=8) printf("Gioi");
	else if(sv.dtb>=6.5) printf("Kha");
	else if(sv.dtb>=4) printf("Trung binh");
	else printf("Yeu");
}
void xeploaiN(SV a[], int n)
{
	printf("\n----------------------------\n");
	for(int i=0; i<n; ++i)
	{
		printf("Xep loai cua sinh vien thu %d: ", i+1);
		xeploai(a[i]);
	}
	printf("\n----------------------------\n");
}

/*Xuat ds N sinh vien ra file*/
void xuatFile(SV a[], int n, char fileName[])
{
	FILE*fp;
	fp=fopen(fileName, "w");
	fprintf(fp, "%20s%5s%5s%10s%10s%10s%10s\n", "Ho Ten", "GT", "Tuoi", "DT", "DL", "DH", "DTB");
	for(int i=0; i<n; i++)
	{
		fprintf(fp, "%20s%5s%5s%10s%10s%10s%10s\n", a[i].ten,  a[i].gt,  a[i].age,  a[i].dT,  a[i].dL,  a[i].dH,  a[i].dtb);
		
	}
	fclose(fp);
}

int main()
{
	int key;
	char fileName[]="DSSV.txt";
	int n;
	bool daNhap=false;
	do
	{
		printf("\nNhap so luong SV: ");
		scanf("%d", &n);
		
	}while(n<=0);
	SV a[n];
	
	while(true)
	{
		system("cls");
		printf("*********************************************\n");
		printf("***    CHUONG TRINH QUAN LY SINH VIEN     ***\n");
		printf("***    1. Nhap du lieu                    ***\n");
		printf("***    2. In danh sach sinh vien          ***\n");
		printf("***    3.Sap xep sv the DTB               ***\n");
		printf("***    4. Xep loai sinh vien              ***\n");
		printf("***    5. Xuat danh sach sinh vien        ***\n");
		printf("***    0. Thoat                           ***\n");
		printf("*********************************************\n");
		printf("***    Nhap lua chon cua ban              ***\n");
		scanf("%d", &key);
		switch(key)
		{
			case 1:
				printf("\nBan da chon nhap DS sinh vien!");
				nhapN(a, n);
				printf("\nBan da dang nhap thanh cong!");
				daNhap=true;
				printf("\nBam phim bat ki de tiep tuc!");
				getch();
				break;
			case 2:
				if(daNhap)
				{
					printf("\nBan da chon xuat DS sinh vien!");
					xuatN(a, n);
				}else{
					printf("\nNhap danh sach sinh vien truoc !!!");
				}
				printf("\nBam phim bat ki de tiep tuc!");
				getch();
				break;
			case 3:
				if(daNhap)
				{
					printf("\nBan da chon sap xep sinh vien theo DTB!");
					sapxep(a, n);
				}else{
					printf("\nNhap danh sach sinh vien truoc !!!");
				}
				printf("\nBam phim bat ki de tiep tuc!");
				getch();
				break;
			case 4 :
				if(daNhap)
				{
					printf("\nBan da chon thoat xep loai sinh vien!");
					xeploaiN(a, n);
				}else{
					printf("\nNhap danh sach sinh vien truoc !!!");
				}
				printf("\nBam phim bat ki de tiep tuc!");
				getch();
				break;	
			case 5:
				if(daNhap)
				{
					printf("\nBan da chon xuat DS sinh vien !");
					xuatFile(a, n, fileName);
				}else{
					printf("\nNhap danh sach sinh vien truoc !!!");
				}
				printf("\nXuat danh sach sinh vien thanh cong vao file %s!", fileName);
				printf("\nBam phim bat ki de tiep tuc!");
				getch();
				break;
			case 0:
				printf("\nBan da chon thoat chuong trinh!");
				getch();
				return 0;
			default:
				printf("\nKhong co chuc nang nay!");
				printf("\nBam phim bat ki de tiep tuc!");
				getch();
				break;
		}
	}
}
