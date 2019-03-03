/*
 *    Description:  Largest prime factor
                    Problem 3

                    The prime factors of 13195 are 5, 7, 13 and 29.

                    What is the largest prime factor of the number 600851475143 ?
 * =====================================================================================
 * 
 * Below is the O(sqrt(n)) version, as suggested in the comment. Here is the code, once more.

def prime_factors(n):
    """Returns all the prime factors of a positive integer"""
    factors = []
    d = 2
    while n > 1:
        while n % d == 0:
            factors.append(d)
            n /= d
        d = d + 1
        if d*d > n:
            if n > 1: factors.append(n)
            break
    return factors
 */
// 600 851 475 143
// -> unsigned long long

#include <stdio.h>
#define VALUE 600851475143
#define VMAX 1024
#define TEST 13195

void primeFactor(unsigned long long n)
{
    printf("%llu ", n);

    unsigned long max = 0;
    int d = 2;

    while (n > 1)
    {
        while((n % d) == 0)
        {
            n /= d;
            printf(" [%i]%llu ", d, n);
        }
        // printf(" ![%i]%llu ", d, n);
        d++;

        if (d*d > n)
        {
            if (n > 1) 
            { 
                printf("\nbreak: [%i]%llu << bingo ", d, n);
                break; 
            }
        }
    }
}

int main()
{
    unsigned long long test = VALUE;
    primeFactor(test);
    return 0;
}
