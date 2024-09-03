#include <stdio.h>

/*
 * Printing temperature table by Fahrenheit and Celsius
 * for "fahr" from 0 to 300
 */

int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0; /* lower boundary for temperature table */
    upper = 300; /* upper boundary */
    step = 20; /* step */
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf ("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}