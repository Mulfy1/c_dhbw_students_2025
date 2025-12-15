#include <stdio.h>
// #define x -2
// #define y -3
int main()
{
    int x = -2, y = -3;

    float z1 = x * x + y * y - (x * y) + 2;
    float z2 = (x - y) * (x - y) * (x - y) - 3;
    float z3 = (2 * (x * x * x) - 0.5 * (x * x) - x + 4) / y;
    printf("z1 = %.2f\n", z1);
    printf("z2 = %.2f\n", z2);
    printf("z3 = %.2f\n", z3);
    return 0;
}
