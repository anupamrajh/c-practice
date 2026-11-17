#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;

    //Ask the user for a temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);


    //Temperature Conditions Statements
    if (celsius <= 0) {
        printf("It's freezing!\n");


    } else if (celsius >= 25 && celsius < 35) {
        printf("It's Room Temperature.\n");


    } else if (celsius >= 0 && celsius < 25) {
        printf("It's cool.\n");


    } else {
        printf("It's hot!\n");
    }

    //Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}