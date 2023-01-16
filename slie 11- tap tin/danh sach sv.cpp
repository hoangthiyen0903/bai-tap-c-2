#include<stdio.h>
struct SINHVIEN
{
	char ht[25], lop[10];
	float dtb;
	
};
main()
{
	FILE*f1;
	SINHVIEN sv;
	int i, n;
	f1=fopen("ds_sv.txt", "wb");
	printf("Nhap so sinh vien: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		fflush(stdin);
		printf("Nhap ho va ten sinh vien thu %d: ", i);
		gets(sv.ht);
		printf("Nhap lop: ");
		gets(sv.lop);
		printf("Nhap diem trung binh: ");
		scanf("%f", &sv.dtb);
		fwrite(&sv,sizeof(SINHVIEN),1,f1);
		
	}
	fclose(f1);
	f1=fopen("ds_sv.txt", "rb");
	for(i=1; i<=n; i++)
	{
		fread(&sv,sizeof(SINHVIEN),1,f1);
		printf("Ho ten sinh vien la %s\n: ", sv.ht);
		printf("Lop %s\n: ", sv.lop);
		printf("Diem trung binh %.2f\n: ", sv.dtb);
	}
}
