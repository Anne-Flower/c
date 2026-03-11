#include <stdio.h>

int value1 = 1;
int value2 = 5;
#define BUFFER 4;

int *areaResult = 1;

int add(int num1, int num2)
{
    return num1 + num2;
}

int calculArea(int value1, int value2)
{
    return *areaResult = value1 * value2;
}

int main()
{
    print(add(value1, value2));
}
