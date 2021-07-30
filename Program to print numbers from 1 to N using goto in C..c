///Program to print numbers from 1 to N using goto in C.


#include <stdio.h>

int main()
{

	int count,n;

	///read value of N

	printf("Enter value of n: ");
	scanf("%d",&n);

	///initialize count with 1

	count =1;

	start: //label

	printf("%d ",count);
	count++;

	if(count<=n)
		goto start;

	return 0;

}
