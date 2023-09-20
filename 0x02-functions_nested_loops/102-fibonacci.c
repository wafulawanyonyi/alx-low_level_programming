#include <stdio.h>

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers, separated by commas and spaces.
 */
void print_fibonacci(void)
{
    int count = 50;
    unsigned long long int first = 1, second = 2, next;

    printf("%llu, %llu", first, second);

    for (int i = 3; i <= count; i++) {
        next = first + second;
        printf(", %llu", next);
        first = second;
        second = next;
    }

    printf("\n");
}

int main(void)
{
    print_fibonacci();
    return 0;
}

