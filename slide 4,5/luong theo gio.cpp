/*tinh so tien luong tong cong*/

#include<stdio.h>
#include<conio.h>


main()
{
	int gio;
	float luongtheoh;
	
	printf("Nhap vao gia tri gio: ");
	scanf("%d", &gio);
	printf("Nhap vao gia tri luongtheoh: ");
	scanf("%f", &luongtheoh);
	
	if(gio>40){
		printf("luong theo gio la %f", gio*luongtheoh);
		break;
	else
		printf("luong theo gio la %f", gio*luongtheoh+(gio-40)*luongtheoh*1.5);
	
		
	}
	getch();
	

}
	

