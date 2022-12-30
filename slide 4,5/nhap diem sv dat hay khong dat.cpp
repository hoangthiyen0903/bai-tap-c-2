/*Viet chuong trinh nhap vao diem sinh vien dat hay khong dat*/

#include<stdio.h>
#include<conio.h>


main()
{
	int diem;
	printf("Nhap vao diem: ");
	scanf("%d", &diem);
	if(diem>=0&&diem<=10)
		{
			if(diem>=5)
				printf("Diem nhap vao Dat", diem);
			else
				printf("Diem nhap vao khong Dat", diem);
		}	
	else
		printf("Diem khong hop le", diem);
	getch();
	

}
	
