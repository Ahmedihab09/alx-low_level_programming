#include <stdio.h>

int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n'); // Print a newline after printing the alphabet

    return (0);
}
