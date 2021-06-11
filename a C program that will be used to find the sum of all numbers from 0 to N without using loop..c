#include <stdio.h>

int main(void)
{

    int n, sum;

    //input value of n

    printf("Enter the value of n: ");
    scanf("%d", &n);

    //initialize sum with 0

    sum =0;

    //use formula to get the sum from 0 to n

    sum = n*(n+1)/2;

    //print sum

    printf("sum = %d\n", sum);

    return 0;

}
