///Function pointer example in c.

#include <stdio.h>

int addTwoNumbers(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b, sum;

    printf("Enter two  integer numbers are :");
    scanf("%d%d",&a,&b);

    ///function pointer declaration

    int (*ptr_sum)(int, int);

    ///function initialization

    ptr_sum = &addTwoNumbers;

    ///function calling

    sum = (*ptr_sum)(a, b);

    printf("Sum is: %d\n", sum);

    return 0;

}
