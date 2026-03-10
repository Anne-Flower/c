#include <stdio.h>

int initialized = 42;
int iii = 45;      // .data
int uninitialized; // .bss
int blo;
int main()
{
    int poupou = 8;
    static int local_static = 7; // .data
    static int temp;             // .bss
    static int pout;
    static int rrrr;
    printf("initialized: %d\n", initialized);
    printf("uninitialized: %d\n", uninitialized);
    return 0;
}