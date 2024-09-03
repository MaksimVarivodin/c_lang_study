#include <stdio.h>

/*
 *  Counting entered characters
 */

int main()
{
    long nc = 0;
    int c;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        printf("\nCharacter: %c, Count: %ld", c, nc); // Debugging output
    }
    printf("\nCharacters entered: %ld", nc);
    return 0;
}
