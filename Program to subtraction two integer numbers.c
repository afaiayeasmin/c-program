#include <stdio.h>
#include <math.h>

int main()
{

    int number1, number2, result;

    printf(" Enter two integers: ");

    scanf("%d  %d", &number1, &number2);

    // calculating result

    result = number1 - number2;

    printf("%d - %d = %d", number1, number2, result);

    return 0;
}
