#include <stdio.h>
/*
 * Printing temperature table by Fahrenheit and Celsius
 * for "fahr" from 0 to 300
 */

int main()
{
    printf(" | %10s | -- | %10s |\n", "", "");
    printf(" | %10s | => | %10s |\n", "Fahrenheit", "Celsius");
    printf(" | %10s | -- | %10s |\n", "", "");
    int fahr{0};
    for (; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

    return 0;
}
