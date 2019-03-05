/*
Sum square difference
Problem 6

The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and 
the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural 
numbers and the square of the sum.
*/

#include <stdio.h>
#define MAX 100
#define ULL unsigned long long

ULL SumOfSquares(int n)
{
    ULL sum = 0;

    for(int i = 1; i <= n; i++)
    {
        sum += i*i;
    }

    return sum;
}

ULL SquareOfTheSum(int n)
{
    ULL sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum*sum;
}

int main()
{
    ULL s1 = SumOfSquares(MAX);
    ULL s2 = SquareOfTheSum(MAX);
    printf("\n%llu - %llu = %llu", s2, s1, s2-s1);
    return 0;
}
