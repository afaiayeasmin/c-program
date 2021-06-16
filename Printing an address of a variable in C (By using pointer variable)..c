/// By using pointer variable

#include <stdio.h>

int main()
{
    // declare variables

    int a;
    float b;
    char c;

    //Declare and Initialize pointers

    int *ptr_a = &a;
    float *ptr_b = &b;
    char *ptr_c = &c;

    //Printing address by using pointers

    printf("Address of a: %p\n", ptr_a);
    printf("Address of b: %p\n", ptr_b);
    printf("Address of c: %p\n", ptr_c);

    return 0;

}
