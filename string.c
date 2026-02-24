#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main() {
	char *hello = "ho ho ho\n";
	char *hellobis = "hu hu hu";
	int8_t helloA[] = {'h', 'a'};
	char helloB[5] = "hojo\0";
	char u[6] = "fffd";
	char buf[100];
	strcpy(buf, "A");
	printf("Writing %s onto buffer with capacity 11",
           hello);
	
	snprintf(buf,11, "%s", hello);
	printf("\nString written on "
           "buffer = %s",
           buf);
	printf("int : %d bytes \n", sizeof(int));
	printf("char : %zu bytes ", sizeof(char));

	//puts(helloA);
	//printf("%s\n",helloB);
	return 0;
}
