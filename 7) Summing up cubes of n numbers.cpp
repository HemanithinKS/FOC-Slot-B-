#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter the value of n:");
    scanf("%d",&n);
    sum=(((n*(n+1))/2)*((n*(n+1))/2));
    printf("sum of cube of %d natural numbers=%d",n,sum);
}
