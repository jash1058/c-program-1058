#include<stdio.h>
int main()
{
  int fact=1,n,i,num;
   printf("enter a number:-");
   scanf("%d",&num);
   
  for(i=1;i<=num;i++)
   {
    fact=fact*i;
   }

   printf("factorial of %d is %d\n",num,fact);
  return 0;
}