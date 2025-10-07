#include<stdio.h>
int main()
{
    int n,i,key,found = 0,a[n];

    printf("enter a size of array:- ");
    scanf("%d",&n);

    printf("enter a number of array:- ");
    for(i = 0;i < n;i++);
    scanf("%d",&a[i]);

    printf("enter a number to search:- ");
    scanf("%d",&key);
    for(i = 0;i < n;i++)
     {
      if(a[i] == key)
      {
       found = 1;
       break; 
      }
    }
  if(found)
   printf("%d found at position %d\n",key,i + 1);
  else
   printf("%d not found\n",key);
 return 0;    
}