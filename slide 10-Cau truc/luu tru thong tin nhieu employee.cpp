#include<stdio.h>
#include<string.h>

struct employee
{
	int id;
	char name[50];
	float salary;
	
};

main()
{
//khai bao e1, e2;
	struct employee e1, e2;
//luu tru thong tin employee 1:
	e1.id=17;
	strcpy(e1.name, "Vinh Tran");
	e1.salary=1000;
//luu tru thong tin employee 1:
	e2.id=37;
	strcpy(e2.name, "Quan Pham");
	e2.salary=1900;
//hien thi thong tin employee 1 ra man hinh	
	printf("employee 1 id la: %d\n", e1.id);
	printf("employee 1 name la: %d\n", e1.name);
	printf("employee 1 salary la: %d\n", e1.salary);
//hien thi thong tin employee 2 ra man hinh	
	printf("employee 2 id la: %d\n", e2.id);
	printf("employee 2 name la: %d\n", e2.name);
	printf("employee 2 salary la: %d\n", e2.salary);
}
