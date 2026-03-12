#include <stdio.h>

int value1 = 1;
int value2 = 5;
#define BUFFER_SIZE 4

int add(int num1, int num2)
{
    int result = num2 + num1;
    return result;
}

int calculArea(int valueA, int valueB)
{
    int buffer[BUFFER_SIZE];
    return buffer[10] = valueA * valueB;
}

int main()
{
    printf("%d\n", add(2, 6));
    printf("%d\n", calculArea(3, 4));
    return 0;
}
