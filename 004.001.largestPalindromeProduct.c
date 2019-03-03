/* Largest palindrome product
Problem 4
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdio.h>
#include <string.h>
#define MAX 999
#define TRUE 1
#define FALSE 2

int maxi(int a, int b)
{
    // returns the higher value
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int intlen(int value)
{
    if (value <= 0)
    {
        return -1;
    }

    int bvalue = value;

    int basis = 10;
    int len = 1;
    while( value / basis > 1)
    {
        value /= basis;
        len++;

    }
    //printf("\nintLen: %i = %i", bvalue, len);
    return len;
}


int isPalindrome(int value)
{
    int len = intlen(value);
    char s[len];
    int res = -1;
    sprintf(s, "%d", value);

    int count = 0;
    while(count < strlen(s)/2)
    {
        res = (s[0 + count])-(s[((strlen(s) - 1) - count)]);
        if (res != 0) 
        {
            //printf("\nNo, is not a palindrome: %i", value);
            return 0;
        }
        // printf("\nres: %i", res);
        // printf("\n%c : %c\n", s[0 + count], s[((strlen(s) - 1) - count)]);
        count++;
    }
    //printf("\nYes, is a palindrome: %i\n", value);
    return 1;
}

void palindromeFinder()
{
    int v[3];
    int m = MAX;
    int n = MAX;
    int res = 0;
    int maxPalindrome = 1;

    while (m > 900)
    {
        while ( n > 900)
        {
            res = m * n;
            // printf("%i * %i = %i\n", m, n , res);
            if (isPalindrome(res))
            {
                if (res > maxPalindrome)
                {
                    maxPalindrome = res;
                    v[0] = maxPalindrome;
                    v[1] = m;
                    v[2] = n;
                }
            }
            n--;
        }
        n = MAX;
        m--;
    }

    printf("\nbiggest palindrome: %i\n", maxPalindrome);
    for (int i = 0; i < 3; i++)
    {
        printf("%i ", v[i]);
    }
}

int main()
{
    printf("%d", 999 * 999);
    //isPalindrome(901109);
    palindromeFinder();
    return 0;
}



