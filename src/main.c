#include <stdio.h>
#define LOWER 0 /* lower boundary of a table */
#define UPPER 300 /* upper boundary of a table */
#define STEP 20 /* step size */

/*
 * Printing table of temperatures for Fahrenheit and Celsius
 */

int main ()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    return 0;
}