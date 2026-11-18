#include <stdio.h>

int main(void)
{
    char ch;

    //Ask the user for a letter
    printf("Enter a letter: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover whitespace

    //Check if the letter is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    
    } else if ((ch >= 'b' && ch <= 'z') || (ch >= 'B' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);

    } else {
        printf("%c is not a letter.\n", ch);

    }

    return 0;
}