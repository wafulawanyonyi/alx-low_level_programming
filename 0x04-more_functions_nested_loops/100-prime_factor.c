#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    long n = 612852475143;
    long largestPrimeFactor = -1;
    long i;

    /* Divide n by 2 until it becomes odd */
    while (n % 2 == 0)
    {
        largestPrimeFactor = 2;
        n /= 2;
    }

    /* Check for prime factors starting from 3 */
    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            largestPrimeFactor = i;
            n /= i;
        }
    }

    /* If n is still greater than 1, it is a prime factor itself */
    if (n > 1)
        largestPrimeFactor = n;

    printf("%ld\n", largestPrimeFactor);

    return (0);
}


