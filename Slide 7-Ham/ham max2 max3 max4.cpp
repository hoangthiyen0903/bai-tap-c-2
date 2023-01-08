//khai bao cac ham max2, max3, max4
int max2(int a, int b);
int max3(int a, int b, int c);
int max4(int a, int b, int c, int d);

int max3(int a, int b, int c){
	return max2( max2(a, b), c);
}
int max2(int a, int b ){
	return a > b ? a : b;
}
int main()
{
	int a=7, b=12, c=16;
	printf("so lon nhat trong a, b, c la %d\n", max3(a, b, c));
	printf("so lon nhat trong a, b, c, d la %d\n", max(a, b, c, d));
	return 0;
	
}
int max4(int a, int b, int c, int d)
{
	return max2(max2(a, b), max2(c, d));
}
