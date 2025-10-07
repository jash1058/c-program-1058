#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000],str2[1000];

    printf("enter the first word or line:- ");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the second word or line:- ");
    fgets(str2,sizeof(str2),stdin);

    str1[strcspn(str1, "\n")]=0;
    str2[strcspn(str2, "\n")]=0;

    int len1=strlen(str1);
    int len2=strlen(str2);

    if(len1 > len2)
       printf("first string is longer than secound one\n");
    else if(len1 < len2)
       printf("secound string is longer than the first one\n");
    else
       printf("both are equal in length\n");
  return 0; 
}