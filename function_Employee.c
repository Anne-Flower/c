#include <stdio.h>
#include <string.h>


#define MAX_LETTERS 22

struct Employee {
                char name[MAX_LETTERS];
                double salary;
        };

void init_employee(struct Employee *emp);


        void init_employee(struct Employee *emp) {
                strcpy( emp->name, "Stevie");
                emp->salary = 3333.333;
                printf("employee : %s win %.2f \n", emp->name, emp->salary);
        }

int main() {

	struct Employee steve = {
		.name = "Steve",
		.salary = 1224356.879,
	};	
	printf("employee %s is paid %.2f \n",steve.name, steve.salary );	

	init_employee(&steve);

	printf("address : %p \n", steve.name);
	printf("address : %p \n", &steve);
	printf("address : %p \n", &steve.salary);


	return 0;
}
