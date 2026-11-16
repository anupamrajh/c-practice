#include <stdio.h>

int main(void)
{
    int num1, num2;
    float average;


    //Ask the user for two whole numbers
    printf("Enter the first whole number: ");
    scanf("%d", &num1);
    
    
    printf("Enter the second whole number: ");
    scanf("%d", &num2);
    
    //Calculate the average
    average = (num1 + num2) / 2.0;
    printf("Average: %.2f\n", average);

    return 0;
}