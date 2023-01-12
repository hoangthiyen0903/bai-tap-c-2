#include<stdio.h>
const int KICHCO=3;
main()
{
	int mang[]={15,150,1500};
	int i, *contro;
	
	contro=mang;
	i=0;
	while(contro<&mang[KICHCO])
	{
		printf("Dia chi mang [%d] la %d\n", i, contro);
		printf("Gia tri mang [%d] la %d\n", i, *contro);
		
		contro++;
		i++;
	}
	
	
	
	
	
}
