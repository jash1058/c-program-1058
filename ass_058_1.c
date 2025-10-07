#include<stdio.h>
#include<string.h>
int main() 
{
  char num[100];
  int length,i,palindrome=1;
  
  printf("Enter a number: \n");
  scanf("%s", num); 
 
   length = strlen(num);

   for(i = 0;i<length/2;i++) 
    {
      if(num[i]!=num[length - i - 1]) 
      {
        palindrome=0;
        break;
      }
    }

    if (palindrome)
    printf("%s is a palindrome number.\n", num);
    else
    printf("%s is not a palindrome number.\n", num);
    return 0;
}

