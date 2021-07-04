///C program to convert hexadecimal Byte to integer.

#include <stdio.h>

//function : getNum
//this function will return number corresponding
//0,1,2..,9,A,B,C,D,E,F

int getNum(char ch)
{
    int num=0;
    if(ch>='0' && ch<='9')
    {
        num=ch-0x30;
    }
    else
    {
        switch(ch)
        {
        case 'A':
        case 'a':
            num=10;
            break;
        case 'B':
        case 'b':
            num=11;
            break;
        case 'C':
        case 'c':
            num=12;
            break;
        case 'D':
        case 'd':
            num=13;
            break;
        case 'E':
        case 'e':
            num=14;
            break;
        case 'F':
        case 'f':
            num=15;
            break;
        default:
            num=0;
        }
    }
    return num;
}

//function : hex2int
//this function will return integer value against
//hexValue - which is in string format

unsigned int hex2int(unsigned char hex[])
{
    unsigned int x=0;
    x=(getNum(hex[0]))*16+(getNum(hex[1]));
}
int main()
{
    unsigned char hexValue[2]="9A";
    unsigned int  intValue=0; //can be stored in unsigned char

    intValue=hex2int(hexValue);

    printf("value is: %d\n",intValue);

    return 0;
}
