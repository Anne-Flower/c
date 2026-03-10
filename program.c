#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char *data = malloc(32);
    strcpy(data, "dynamic memory");
    printf("%s\n", data);
    free(data);
    return 0;
}