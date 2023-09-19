#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function swaps the values of the integers pointed to
 *              by @a and @b.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
	swap_int(&num1, &num2);
	printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

	return (0);
}

