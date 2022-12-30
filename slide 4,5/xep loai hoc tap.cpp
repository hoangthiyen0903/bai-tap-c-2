/*xep loai hoc tap*/

#include<stdio.h>
#include<conio.h>


main()
{
	float fdiem;
	printf("Nhap vao diem: ");
	scanf("%f", &fdiem);
	
	if(fdiem>=0&&fdiem<=10)
	{
		if(fdiem>=9)
			printf("xep loai xuat sac.\n");
		else if(fdiem>=8)
			printf("xep loai gioi.\n");
		else if(fdiem>=7)
			printf("xep loai kha.\n");
		else if(fdiem>=6)
			printf("xep loai trung binh kha.\n");
		else if(fdiem>=5)
			printf("xep loai trung binh .\n");
		else
			printf("xep loai yeu");
	}
	else
		printf("Diem nhap vao khong hop le");
	getch();
	

}
	

