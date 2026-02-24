#include <stdio.h>
#define MAX_VALUE 4
int main(){
	int numbers[MAX_VALUE]= {2, 4, 5, 6};
	printf("array: \n");

	for(int i = 0; i < MAX_VALUE; i++){
		//numbers[i] = i;
		printf("numbers[%d]= %d\n", i, numbers[i]); 
	}

	printf("modified array: \n");

	for(int i = 0; i < MAX_VALUE; i++){
                numbers[i] = i+3;
                printf("numbers[%d]= %d\n", i, numbers[i]);
		printf("Pointer or memory address: %p\n", &numbers[i]);
        }

	return 0;
}
