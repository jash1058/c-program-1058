#include<stdio.h>
int main()
{
  float km,miles;
    printf("enter distence in miles:- ");
    scanf("%f",&miles);
    
    km = miles * 1.60934;

    printf("%.2f miles = %.2f kilometres\n",miles,km);
  return 0;
}     