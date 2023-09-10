# include <stdio.h>
/**
 * main - main function of computer size
 * Return: return 0 always
 */
int main(void)
{
	printf("size of char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("size of long int: %lu byte(s)", sizeof(long int));
	printf("size of long long int: %lu byte(s)", sizeof(long long int));
	printf("size of float: %lu byte(s)", sizeof(float));
	return (0);

}
