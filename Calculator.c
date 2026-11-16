#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;


    //Ask the user for two whole numbers
    printf("Enter the first whole number: ");
    scanf("%d", &num1);
    
    
    printf("Enter the second whole number: ");
    scanf("%d", &num2);
    
    //Ask what operation the user wants to perform
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &op); // Note the space befor e %c to consume any leftover whitespace
    
    //Perform only selected operations based on user input
    switch (op) {
        case '+':
            printf("Sum: %d\n", num1 + num2);
            break;
        case '-':
            printf("Difference: %d\n", num1 - num2);
            break;
        case '*':
            printf("Product: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Exact Quotient: %.2f\n", (float)num1 / num2);
            } else {
                printf("Quotient: Undefined ( cannot divide by zero)\n");
            }
            break;
        default:
            printf("Invalid operation. Please enter one of +, -, *, or /.\n");
            return 1; // Exit with an error code
    }
    
    return 0;
}