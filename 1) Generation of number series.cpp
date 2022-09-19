#include<stdio.h>
int main()
{
	int i,k;
	printf("enter the number:");
	scanf("%d",&i);
	printf("\n");
	for (k=1;k<=i;k++)
	{
		if(i==k)
		{
			printf(" %d ",k);
			
		}
		else
		{
			printf(" %d ",k);
		}
	}
	return 0;
}
