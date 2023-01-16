#include<stdio.h>
main()
{
	FILE*f1;
	float x;
	f1=fopen("dayso.txt", "wb");
	do
	{
		printf("Nhap x: ");
		scanf("%f", &x);
		if(x!=0)
			fwrite(&x,sizeof(float),1,f1);
	}
	
	while(x!=0);
	fclose(f1);
	f1=fopen("dayso.txt", "rb");
	while (feof(f1)==0)
	{
		fread(&x,sizeof(float),1,f1);
		if(feof(f1)==0)
		printf("%0.2f\n", x);
	}
	fclose(f1);
	
}
