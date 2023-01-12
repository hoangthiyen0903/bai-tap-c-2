#include<stdio.h>

 struct SINHVIEN
{
	char hoten[25], lop[10];
	float dtb;
	
};
main()
{
	SINHVIEN sv[100], tg;
	int i, j, n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", n);
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
	for(i=1; i<=n-1; i++)
		for(j=i+1; j<=n; j++)
			if(sv[i].dtb>sv[j].dtb)
			{
				tg=sv[i];
				sv[i]=sv[j];
				sv[j]=tg;
			
			}
	for(i=1; i<=n; i++)
	{
		printf("Ho ten sv la %s: \n", sv[i].hoten);
		printf("Lop sv la %s: \n", sv[i].lop);
		printf("Diem trung binh sv la %0.2f: \n ", sv[i].dtb);
	}
}
