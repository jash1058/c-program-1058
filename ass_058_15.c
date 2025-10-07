#include<stdio.h>
int main()
{
 int n,i;
  printf("enter a number:- ");
  scanf("%d",&n);
  
 if (n <= 1)
  {
   printf("not prime");
  }
  
 for(i = 2;i <= n/2; i++)
  {
   if(n % i == 0)
    {
     printf("%d is not a prime number",n);
    }
   else
    {
     printf("%d is a prime number\n",n);
    }
  } 
 return 0;   
}
