#include<stdio.h>
#include<string.h>
int main()
{
 char str[1000];
 printf("\nenter a string:-");
 gets(str);
 
 int i,j,start,len=strlen(str),end=len;
 printf("\nreversed words:-");

 for(i=len-1;i>=0;i--)
  {
   if(str[i]==' '||i==0)
    {
     start=(i==0)?0:i+1;
     for(j=start;j<end;j++) 
     printf("%c",str[j]);
     printf(" ");
     end=i;  
   }
 }
 return 0;
}
