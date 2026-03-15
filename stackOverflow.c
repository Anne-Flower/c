#include <stdio.h>
#include <string.h>

void win()
{
    printf("You win!\n");
}

void vuln()
{
    char buffer[32];
    gets(buffer);
}

int main()
{
    vuln();
    return 0;
}