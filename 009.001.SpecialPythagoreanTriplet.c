/*
Special Pythagorean triplet
Problem 9

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

/*
 * a <  b < c
 * 
 * a^2 + b^2 + c^2 = 1000
 * wenn
 * a^2 + b^2 - 1000 =  c^2 
 * 
 * [1]suche triplet wo: a^2 + b^2 = c^2, limit:=1000
*/

#include <stdio.h>

void makeTriplets(int lim)
{
    int a, b, c;
    a = 0;
    b = 2;
    c = 3;

    for (a = 1; a <= 1000 && a < b ; a++)
    {
        for (b = a + 1; b <= 1000 && b < c ; b++)
        {
            for (c = b + 1; c <= 1000; c++)
            {
                if (a*a + b*b == c*c)
                {
                    if (a+b+c==1000)
                    {
                        printf("\n%i + %i = %i", a, b, c);
                        printf("\nProduct abc = %i", a*b*c);
                    }
                }
            }
        }
    }
}

int main()
{
    makeTriplets(1000);
    return 0;
}

