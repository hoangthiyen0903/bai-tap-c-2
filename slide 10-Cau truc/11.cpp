#include<stdio.h>

 struct SINHVIEN
{
	char hoten[25], lop[10];
	float dtb;
	
};
void NHAP_SV(SINHVIEN sv[], int n)
{
	int i;
	for(i=1; i<n; i++)
	{
		fflush(stdin);
		printf("Nhap ho va ten sinh vien thu %d: ", i);
		gets(sv[i].hoten);
		printf("Nhap lop sinh vien : ");
		gets(sv[i].lop);
		printf("Nhap diem trung binh sinh vien : ");
		scanf("%f", &sv[i].dtb);
		
	}
}

void IN_DSSV(SINHVIEN sv[], int n)
{
	int i;
	for(i=1; i<=n-1; i++)
	{
		printf("Ho ten sv la %s: \n", sv[i].hoten);
		printf("Lop sv la %s: \n", sv[i].lop);
		printf("Diem trung binh sv la %0.2f: \n ", sv[i].dtb);
	}
}

void SAPXEP(SINHVIEN sv[], int n)
{
	SINHVIEN tg;
	int i, j;

	for(i=1; i<=n-1; i++)
		for(j=i+1; j<=n; j++)
			if(sv[i].dtb>sv[j].dtb)
			{
				tg=sv[i];
				sv[i]=sv[j];
				sv[j]=tg;
			
			}
}
main()
{
	SINHVIEN dssv[100];
	int sosv;
	printf("Nhap so luong sinh vien : ");
	scanf("%d", &sosv);
	NHAP_SV(dssv, sosv);
	IN_DSSV(dssv, sosv);
	SAPXEP(dssv, sosv);
	printf("Danh sach sv sau sap xep :\n");
	IN_DSSV(dssv, sosv);
	
}
