#include<stdio.h>
int main()
{
 int a, b, lcm;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  if (a == 0 || b == 0) 
 {
  printf("LCM not possible for 0");
  return 0;
 }
  
  lcm = (a > b) ? a : b;
  
  while (1) 
 {
   if (lcm % a == 0 && lcm % b == 0) {
      printf("LCM = %d\n", lcm);
   break;
  }
   lcm++;
 }
  return 0;
}
