/// By using "address of" (&) operator.

#include <stdio.h>

int main()
{
    // declare variables
    int a;
    float b;
    char c;

    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);
    printf("Address of c: %p\n", &c);

    return 0;

}
