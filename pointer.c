#include <stdio.h>

int main() {
	int x = 5;
	int *px = &x;
	int *ppx = &*px;
	*px = 15;
	

	printf("x address: %p \n", &x);

	printf("px value : %d \n", *px);
	printf("px address: %p \n", px);
	
	printf("ppx value : %d \n", *ppx);
        printf("ppx address: %p \n", ppx);


	return 0;
}
