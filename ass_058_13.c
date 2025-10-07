#include<stdio.h>
int main()
{
    int N,i;
    printf("enter N:- ");
    scanf("%d", &N);

    for(i = 1;i <= N;i++)
    {
      printf("%d ", 2*i);
    }
 return 0;
}