#include <stdio.h>

int main()
{
    int speed = 30;
    int lane = 1;
    printf("Create the properties of a vehicle.\n");
    printf("Speed in m/s: %d\n", speed);
    printf("Lane (1=left, 2=center, 3=right): %d\n\n\n", lane);
    printf("\t \tL\t\tC\t\tR\n");
    printf("\t|\t \t|\t \t|\t \t|\n");
    if (lane == 1)
    {
        printf("\t|\tX\t|\t \t|\t \t|\n");
    }
    else if (lane == 2)
    {
        printf("\t|\t \t|\tX\t|\t \t|\n");
    }
    else if (lane == 3)
    {
        printf("\t|\t \t|\t \t|\tX\t|\n");
    }
    printf("\t|\t \t|\t \t|\t \t|\n");
    return 0;
}
