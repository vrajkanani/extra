#include<stdio.h>
void main()
{
	int i,k,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
	    for(k=1;k<=i;k++)
		{
			printf("* ",k);
		}	
		printf("\n");
	
	}
}
