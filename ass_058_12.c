#include <stdio.h>
int main() 
{
    int numbers[5], i, largest;

    printf("Enter five numbers: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &numbers[i]);

    largest = numbers[0];

    for(i = 1; i < 5; i++)
        if(numbers[i] > largest)
            largest = numbers[i];

    printf("The largest number is: %d\n", largest);
    return 0;
}