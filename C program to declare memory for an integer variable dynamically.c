///C program to declare memory for an integer variable dynamically.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* iVar;

    iVar = (int*)malloc(sizeof(int));

    printf("Now, input an integer value: ");
    scanf("%d", iVar);

    printf("You entered: %d.\n", *iVar);

    free(iVar);

    return 0;
}
