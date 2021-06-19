#include <stdio.h>

int main()
{
    int cp;
    int sp;
    int amount;

    /*enter the cost price*/

    printf("Enter the cost price: ");
    scanf("%d", &cp);

    /*enter the selling price*/

    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if (sp > cp) {
        /*formula to find profit*/
        amount = sp - cp;
        printf("profit = %d", amount);
    }

    else if (cp > sp) {
        /*formula to find loss*/
        amount = cp - sp;
        printf("loss = %d", amount);
    }

    else {
        printf("No profit no loss\n");
    }

    return 0;

}
