#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 255


typedef enum {
	STATUS_SUCCESS = 0,
	STATUS_FAILED = -1,
} status; 

struct Employee
{
	char name[MAX_NAME];
	double salary;
};

status create(struct Employee *emp) {
	strcpy (emp->name, "Vivi");
	emp->salary = 333333333.3;
	printf("here is %s (with init method and pointer), he is paided %.2f and his memory address is : %p \n", emp->name, emp->salary, emp->name );
	return STATUS_SUCCESS;
};

status destroy(struct Employee *emp) {

	emp->name[0] = 0;
	emp->salary = 0;
	return STATUS_SUCCESS;
};


int main()
{
	struct Employee steven = {
		.name = "Stou",
		.salary = 23456.78,
	};

	printf("just initialized employee %s with %.2f of salary, in the simpler way \n %s is located here %p \n", steven.name, steven.salary, steven.name, steven.name);

	init(&steven);

	
	return 0;
}
