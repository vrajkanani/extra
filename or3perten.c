#include<stdio.h>
void main()
{
	int i,j,k,a;
	printf("Enter a no.:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		k=a;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k--;
			
		}
		printf("\n");
	}
	
}
