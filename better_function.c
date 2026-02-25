#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 255

typedef enum
{
	STATUS_SUCCESS = 0,
	STATUS_FAIL = -1,
} status;

struct Employee
{
	char name[MAX_NAME];
	double salary;
};

status create(struct Employee *emp)
{
	if (emp == NULL)
	{
		return STATUS_FAIL;
	}

	strcpy(emp->name, "Vivi");
	emp->salary = 333333333.3;

	printf("here is %s (with init method and pointer), he is paided %.2f and his memory address is : %p \n", emp->name, emp->salary, emp->name);

	return STATUS_SUCCESS;
};

status destroy(struct Employee *emp);

int main()
{

	struct Employee toto = {0};
	struct Employee vava = {
		.name = "vava",
		.salary = 4545.78,
	};
	printf("name : %s and salary : %.2f and address : %p \n", vava.name, vava.salary, vava.name);

	printf("name : %s and salary : %.2f and address : %p \n", toto.name, toto.salary, toto.name);
	create(&toto);
	destroy(&vava);
	printf("name : %s and salary : %.2f and address : %p \n", vava.name, vava.salary, vava.name);

	return 0;
}

status destroy(struct Employee *emp)
{
	if (emp == NULL)
		return STATUS_FAIL;

	emp->name[0] = '\0';
	emp->salary = 0;

	return STATUS_SUCCESS;
}