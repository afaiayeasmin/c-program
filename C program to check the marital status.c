/*
C program to check the marital status
of a girl
*/

#include <stdio.h>
#include <string.h>

// main function
int main()
{
    // Declare a char buffer to take input for name
    char name[30]= {0};
    // Declare a char buffer to take input for answer
    char YesNo[10]= {0};

    //input name
    printf("Enter the name of a girl : ");
    gets(name);

    //input marital status

    printf("Is the girl married (Y-Yes, N-No) : ");

    gets(YesNo);

    if((!strcmp(YesNo,"yes")) || (!strcmp(YesNo,"Y")))

        printf("Her full name is : Mrs. %s",name);

    else if((!strcmp(YesNo,"no")) || (!strcmp(YesNo,"N")))

        printf("Her full name is : Miss %s",name);
    else
        printf("Marital status is wrong");


    return 0;

}
