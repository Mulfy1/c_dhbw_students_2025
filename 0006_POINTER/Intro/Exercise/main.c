#include <stdio.h>

int main()
{
    int aValue = 42;
    int *myPointer = &aValue;

    printf("\nInitial value: \t\t%d\n", aValue);
    printf("value through pointer: \t%d\n", *myPointer);
    *myPointer = 20;
    printf("Modified value through pointer: \t%d\n", *myPointer);

    int *yourPointer = myPointer;
    printf("address of myPointer: \t\t%p\n", &myPointer);
    printf("address of yourPointer: \t%p\n", &yourPointer);
    printf("address of aValue: \t\t%p\n", &aValue);
    return 0;
}