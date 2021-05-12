
#include <stdio.h>

int main()
{

    char name[30];
    float basic, hra, da, pf, gross;

    printf("Enter name: ");
    gets(name);

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);
    printf("Enter HRA: ");
    scanf("%f",&hra);
    printf("Enter D.A.: ");
    scanf("%f",&da);

    /*pf automatic calculated 12%*/
    pf= (basic*12)/100;

    gross=basic+da+hra+pf;

    printf("\nName: %s \nBASIC: %f \nHRA: %f \nDA: %f \nPF: %f \nGROSS SALARY: %.2f  ",name,basic,hra,da,pf,gross);

    return 0;
}
