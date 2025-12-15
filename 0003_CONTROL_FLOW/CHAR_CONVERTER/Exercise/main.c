#include <stdbool.h>
#include <stdio.h>

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    // is numeric
    if (character - 0x30 >= 0 && character - 0x30 <= 9)
    {

        printf("%c is a numeric character.\n", character);
    }
    else
    {
        printf("%c is not a numeric character.\n", character);
    }

    // is upper case
    if (character - 'A' >= 0 && character - 'A' <= 25)
    {

        printf("%c is an upper case character.\n", character);
    }
    else
    {
        printf("%c is not an upper case character.\n", character);
    }
    // is lower case
    if (character - 'a' >= 0 && character - 'a' <= 25)
    {

        printf("%c is a lower case character.\n", character);
    }
    else
    {
        printf("%c is not a lower case character.\n", character);
    }
    // is alpha
    if ((character - 'A' >= 0 && character - 'A' <= 25) || (character - 'a' >= 0 && character - 'a' <= 25))
    {

        printf("%c is an alphabetic character.\n", character);
    }
    else
    {
        printf("%c is not an alphabetic character.\n", character);
    }
    // is alpha numeric
    if ((character - 'A' >= 0 && character - 'A' <= 25) || (character - 'a' >= 0 && character - 'a' <= 25) || (character - 0x30 >= 0 && character - 0x30 <= 9))
    {

        printf("%c is an alphanumeric character.\n", character);
    }
    else
    {
        printf("%c is not an alphanumeric character.\n", character);
    }
    // to upper case
    if (character - 'a' >= 0 && character - 'a' <= 25)
    {
        char upper_character = character - ('a' - 'A');
        printf("The upper case of %c is %c.\n", character, upper_character);
    }
    else
    {
        printf("%c has no upper case equivalent.\n", character);
    }
    // to lower case
    if (character - 'A' >= 0 && character - 'A' <= 25)
    {
        char lower_character = character + ('a' - 'A');
        printf("The lower case of %c is %c.\n", character, lower_character);
    }
    else
    {
        printf("%c has no lower case equivalent.\n", character);
    }
    return 0;
}