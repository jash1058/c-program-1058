#include<stdio.h>
int main()
{
    int i,n,a[100],j,temp;
    printf("enter a size of array:- ");
    scanf("%d",&n);
 
    printf("enter a numbers of array:-",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i = 0;i < n;i++)
    {
     for(j = i + 1;j < n;j++)
       {
        if(a[i] > a[j])
         {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
    }  
    
    printf("secound largest number is %d\n",a[n-2]);
 return 0;  
}