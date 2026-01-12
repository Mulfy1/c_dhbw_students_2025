#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t length = 0;
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%zu", &length);
    if (length <= 0)
    {
        printf("\nInvalid input! The number of elements must be greater than zero.");
        return 0;
    }
    int *heapArray = (int *)malloc(sizeof(int) * length);
    if (heapArray == NULL)
    {
        printf("\nMemory allocation failed.");
    }
    printf("\nEnter %zu integers:", length);
    ;
    for (size_t i = 0; i < length; i++)
    {
        scanf("%d", &heapArray[i]);
        sum += heapArray[i];
    }
    printf("\nThe sum of the array elements is: %d\n", sum);
    free(heapArray);
    heapArray = NULL;
    return 0;
}
