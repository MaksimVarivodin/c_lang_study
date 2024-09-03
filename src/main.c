#include <stdio.h>

/*
 *  Copying input to output
 */

int main(int argc, char* argv[])
{
    int c = 0;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        printf(" ");
        c = getchar();
    }
    return 0;
}
