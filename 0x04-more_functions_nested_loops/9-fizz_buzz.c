#include "main.h"
#include <stdio.h>

/**
 * main - print Fizz, Buzz or FizzBuzz
 * Return: 0 on success
 */
int main(void)
{
	int i, mult_of_3, mult_of_5;

	for (i = 1; i <= 100; i++)
	{
		mult_of_3 = (i % 3) == 0;
		mult_of_5 = (i % 5) == 0;

		if (mult_of_3 && mult_of_5)
		{
			printf("FizzBuzz ");
		}
		else if (mult_of_5)
		{
			printf("Buzz ");
		}
		else if (mult_of_3)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
