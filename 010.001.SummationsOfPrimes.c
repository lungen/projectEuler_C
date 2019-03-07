/*
Summation of primes
Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

/*
   Sieb
   [1] Sieb von z.B: 1-100
   [2] mache primes:
        2
        2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
          3   5   7   9    11    13 ...
          3
              5   7        11     13    15
              5
                  7        11      13      ...
                  7
*/

#include <stdio.h>
#define MAX 2000000

void PrimeSieve(int v[], int limit)
{
    unsigned long long sum = 0;
    int j = 0;

    for (int i = 2; i <= MAX; i++)
    {    
        if (v[i] == 0)
            continue;

        for (j = 2*i; j <= MAX; j+=i)
        {
            v[j] = 0;
        }
        sum += i;
    }
    printf("\n\nSum %llu", sum);
}

int main()
{
    int v[MAX];
    for(int i = 0; i <= MAX; i++) { v[i] = i;}
    PrimeSieve(v, MAX);

    return 0;
}

