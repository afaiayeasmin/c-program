#include<stdio.h>

int main()
{
    int feet,inches;

    printf("Enter the value of feet: ");
    scanf("%d",&feet);

    //converting into inches
    inches=feet*12;

    printf("Total inches will be: %d\n",inches);
    return 0;
}
