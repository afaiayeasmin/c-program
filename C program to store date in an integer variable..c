///C program to store date in an integer variable.

#include <stdio.h>

int main()
{
    int dd, mm, yy;
    int date;

    printf("Enter date (dd/mm/yy) format: ");

    scanf("%d/%d/%d", &dd, &mm, &yy);

    printf("\nEntered date is: %02d/%02d/%04d\n", dd, mm, yy);

    /*adding dd,mm,yy into date*/
    /*an integer has 4 bytes and dd range is 1 to 31 , mm range is 1 to 12 which
     *can be stored in 1 byte, 1 byte and in rest of 2 bytes
     *we can store year.*/

    date = 0;
    date |= (dd & 0xff); /*dd storing in byte 0*/
    date |= (mm & 0xff) << 8; /*mm storing in byte 1*/
    date |= (yy & 0xffff) << 16; /*yy storing in byte 2 and 3*/

    printf("Date in single variable: %d [Hex: %08X] \n", date, date);

    /*Extracting dd,mm,yy from date (an integer value)*/

    dd = (date & 0xff); /*dd from byte 0*/
    mm = ((date >> 8) & 0xff); /*mm from byte 1*/
    yy = ((date >> 16) & 0xffff); /*yy from byte 2 and 3*/

    printf("Date after extracting: %02d/%02d/%04d\n", dd, mm, yy);

    return 0;

}
