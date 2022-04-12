#include <stdio.h>

/**
 *
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
    	printf("Size of char: %i byte(s)", sizeof a);
    	printf("Size of int: %i byte(s)", sizeof b);
    	printf("Size of float: %i byte(s)", sizeof c);
    	printf("Size of long int: %i byte(s)", sizeof d);
	printf("Size of long long int: %i byte(s)", sizeof e);
	return (0);	
}
