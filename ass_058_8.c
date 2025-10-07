#include<stdio.h>
int main()
{
    float fahrenheit,celsius;

    printf("entehr a fahrenheit:-");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("celsius is %f",celsius);
  return 0;
}