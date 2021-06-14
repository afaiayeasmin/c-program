#include <stdio.h>

int main()
{
    unsigned char variable1;
    unsigned short variable2;
    unsigned int variable3;

    printf("Enter 1 byte  value in Hexadecimal: ");
    scanf("%x", &variable1);
    printf("Enter 2 bytes value in Hexadecimal: ");
    scanf("%x", &variable2);
    printf("Enter 4 bytes value in Hexadecimal: ");
    scanf("%x", &variable3);

    printf("Value of variable1 in HEX: %X, Decimal: %d\n", variable1,variable1);
    printf("Value of variable2 in HEX: %X, Decimal: %d\n", variable2,variable2);
    printf("Value of variable3 in HEX: %X, Decimal: %d\n", variable3,variable3);

    return 0;

}
