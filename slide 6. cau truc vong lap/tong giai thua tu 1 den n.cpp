/*in ra giai thua tu 1 den n*/
#include<stdio.h>


main()
{
	int i, n, gt=1;
	printf("Nhap vao n:");
	scanf("%d", &n);
	for(i = 1; i<=n; i+=1)
	{	
		gt=gt*i;
	}
	printf(" giai thua tu 1 den n la: %d\n", gt);
	
}
	
