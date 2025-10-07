#include<stdio.h>
#include<string.h>
int main()
{
   char str1[1000],str2[1000];
   
     printf("enter first string:- ");
     scanf("%s",&str1);
     printf("enter second string:- ");
     scanf("%s",&str2);

    if(strcmp(str1, str2)==0)
       printf("both string are same\n");
    else
       printf("both string are not same\n");
  return 0;  
}