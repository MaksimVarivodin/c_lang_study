#include <stdio.h>

/*
 *  Counting entered characters
 */

int main(int argc, char* argv[])
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
    return 0;
}
