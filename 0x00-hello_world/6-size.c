#include <stdio.h>

/**
 * main - Entry point
 * Description: function is required
 * Return: always return (0) (success)
 */
int main(void)
{
	char a = 'A';
	int b = 1;
	float c = 1.0;
	long int d = 1;
	long long int e = 1;

	prinf("Size of a char: %i byte(s)\n", sizeof(a));
	printf("Size of an int: %i byte(s)\n", sizeof(b));
	printf("Size of a long int: %i byte(s)\n", sizeof(d));
	printf("Size of a long long int: %i byte(s)\n", sizeof(e));
	printf("Size os a float: %i byte(s)\n", sizeof(c));
	return (0);

}
