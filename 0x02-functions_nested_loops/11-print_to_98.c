#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints number to 98
 * @n: takes one argument
 * Description: given any number, prints from that number to 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else if (n > 98)
			{
				printf("%d, ", n);
			}
			n--;
		}
	}

	else if (n < 98)
	{

		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else if (n < 98)
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	printf("\n");
}
