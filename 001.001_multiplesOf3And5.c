// Multiples of 3 and 5
// Problem 1
//
// If we list all the natural numbers below 10 that are multiples of 3 or 5,
// we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>
// #include <stdbool.h>
#define VAL 1000

int main()
{
    int suma = 0;

    int n = 1;
    while (n < VAL)
    {
        bool added = 0;
        if (!(n % 3 )) {
            suma += n;
            added = 1;
            printf("%d ", n);
        }

        if (!(n % 5) && !added)
        {
            suma += n;
            printf("%d ", n);
        }
        n++;
    }

    printf("\nSumme: %d\n",suma);
    return 0;
}
