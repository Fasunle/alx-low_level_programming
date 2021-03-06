#include "main.h"

void move_to_line(int n);

/**
 * print_diagonal - prints on the diagonal
 * @n: integer
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			move_to_line(i);
		}
	}
}

/**
 * move_to_line - move to the next line
 * @n: integer
 * Return: void
 */

void move_to_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
}
