#include <stdio.h>

/*
 *  Counting entered characters
 */

int main()
{
    double nc;
    printf("Enter symbols:");
    for (nc = 0; getchar() != EOF; ++nc);

    printf("Found symbols:%.0f\n", nc);
    return 0;
}
