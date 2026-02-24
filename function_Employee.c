#include <stdio.h>


#define MAX_LETTERS 22

struct Employee {
                char name[MAX_LETTERS];
                double salary;
        };

//void init_employee(struct Employee *emp);

int main() {

	struct Employee steve = {0};	
	printf("employee %s is paid %2f \n",steve.name, steve.salary );	
}
