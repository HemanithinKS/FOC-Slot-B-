#include<stdio.h>

int main()
{
  float i,n,Sum=0,numbers;
  float Average;

  printf("\nPlease Enter How many Number you want?\n");
  scanf("%f",&n);

  printf("\nPlease Enter the elements one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%f",&numbers);
     Sum = Sum +numbers;
   }

  Average = Sum/n;

  printf("\nSum of the %f Numbers = %.2f",n, Sum);
  printf("\nAverage of the %f Numbers = %.2f",n, Average);

  return 0;
}
