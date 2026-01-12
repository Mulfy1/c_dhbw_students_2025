#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t length = 3;
    size_t memoryReq = length * sizeof(int);

    printf("\nadresse of length: %p", (void *)&length);

    printf("\nsizeof(int): %lu", sizeof(int));
    printf("\nmemoryReq: %zu", memoryReq);

    int *heapArray = (int *)malloc(memoryReq);

    for (size_t i = 0; i < length; i++)
    {
        heapArray[i] = (int)i * 100;
    }
    for (size_t i = 0; i < length; i++)
    {
        printf("\nheapArray[%ld]: %d", i, heapArray[i]);
        printf("\nadress of heapArray[%ld]: %p\n", i, (void *)&heapArray);
    }

    free(heapArray);
    heapArray = (void *)0; /* == NULL */ // sonst dangling pointer

    return 0;
}
