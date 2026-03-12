#include <stdio.h>

int value1 = 1;
int value2 = 5;
#define BUFFER_SIZE 4

int add(int num1, int num2)
{
    return num1 + num2;
}

int calculArea(int valueA, int valueB)
{
    int buffer[BUFFER_SIZE];
    return buffer[10] = valueA * valueB;
}

int main()
{
    printf("%d\n", add(value1, value2));
    printf("%d\n", calculArea(value1, value2));
}
