/*Set buffer with specific value using memset in C -
Example of memset()*/

#include <stdio.h>
#include <string.h>


int main()
{
    unsigned char buffer[10]= {0};
    int i;

    printf("buffer: %s\n",buffer);

    //set value with space
    memset(buffer,' ', 9);  //last byte should be null
    printf("buffer (memset with space): %s",buffer);
    printf(".\n");

    //set value with 'x'
    memset(buffer,'x', 9);  //last byte should be null
    printf("buffer (memset with x): %s",buffer);
    printf(".\n");

    //set value with value 15
    memset(buffer,15, 9);   //last byte should be null
    printf("buffer (memset with value 15): %s",buffer);
    printf(".\n");
    printf("buffer (memset with value 15 printing integer values:\n*** LAST VALUE WILL BE NULL ***):\n");
    for(i=0; i<10; i++)
    {

        printf("%02d ",buffer[i]);
    }

    printf(".\n");


    return 0;

}
