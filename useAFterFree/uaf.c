#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    long long salary;
    long age;
    char *name;
} user;

void greet(const char *nameMsg)
{
    printf("Hello %s !\n", nameMsg);
};

int main()
{
    user *u = malloc(sizeof(user));

    u->name = "Bob";
    free(u);

    greet(u->name);
    return 0;
}