/*
10001st prime
Problem 7

By listing the first six prime numbers: 
2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>
#define MAX 100
#define FALSE 0
#define TRUE 1

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (!(n % i))
        {
            //printf("!%i ", n);
            return FALSE; 
        }
    }

    printf("_%i ", n);
    return n;
}


void PrimeSieve(unsigned short v[])
{
    int i = 1;
    v[0] = 0;

    for(int j = 2; j < MAX; j++)
    {
        int n = j;
        while(n < MAX)
        {

        }

    }

}

int main()
{
    int v[MAX];
    for (int i = 0; i < MAX; i++)
        v[i] = 0;

//     PrimeSieve(MAX);
    int m = 2;
    int primeCounter = 0;
    while(primeCounter <= 10000)
    {
        if(isPrime(m))
        {
            primeCounter++;
        }
        m++;
    }
    printf("\nPrimes found: %i", primeCounter);

    return 0;
}


