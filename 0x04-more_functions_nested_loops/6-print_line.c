#include "main.h"

/**
 * print_line - draws a line between two points
 * @n: ineteger
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
