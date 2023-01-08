/*ham ko mang gt tra ve co truyen tham so*/
#include<stdio.h>

void vechu(char chu, int soluong)
{
	int i;
	for(i=0; i<soluong; i++){
		printf("%c", chu);
	}
	printf("\n")
		
}
int main()
{
	vechu("h", 20);
	vechu("a", 20);
	vechu("b", 12);
	vechu("a", 5);
	vechu("p", 10);
	
	return 0;
}
