#include <stdio.h>

int main(void)
{
    //Created 4 Integers a, b, c, and big to store the three numbers and the biggest number
    int a, b, c, big;


    //Ask the user for three whole numbers one by one and store them in the variables a, b, and c
    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Enter Third Number: ");
    scanf("%d", &c);

    big = a;
    if (b > big) {
        big = b;
    }
    if (c > big) {
        big = c;
    }

    printf("The biggest number is: %d\n", big);

    return 0;
}
