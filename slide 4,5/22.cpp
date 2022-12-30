#include <stdio.h> 
main() 
{ 
float fdiem; 
printf("Nhap vao diem so: ");  scanf("%f", &fdiem); 
if (fdiem >=0 && fdiem <=10) 
{
if (fdiem >=9) 
printf("Xep loai = Xuat sac.\n"); 
else if (fdiem >=8) 
printf("Xep loai = Gioi.\n"); 
else if (fdiem >=7) 
printf("Xep loai = Kha.\n"); 
else if (fdiem >=6) 
printf("Xep loai = TBKha.\n"); 
else if (fdiem >=5) 
printf("Xep loai = TBinh.\n"); 
else 
printf("Xep loai = Yeu.\n"); 
}
else		 //if (fdiem>=0 && fdiem<=10) 
printf("Nhap diem khong hop le.\n"); 
}

