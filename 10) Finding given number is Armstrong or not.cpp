#include<stdio.h>  
 int main()    
{    
    int n,a,r,sum=0,temp;    
    printf("enter the number=");    
    scanf("%d",&n);
	a=n;    
    temp=n;    

while(n>0)    
{    
   r=n%10;    
   sum=sum+(r*r*r);    
   n=n/10;    
}    

if(temp==sum)    
    printf(" %d armstrong  number.",a);    

else    
    printf(" %d not armstrong number.",a);    
return 0;  
} 
