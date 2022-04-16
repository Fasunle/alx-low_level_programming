#include "main.h"

void tab(int n);

/**
 * print_triangle - prints on the diagonal
 * @size: integer
 * Return: void
 */

void print_triangle(int size)
{
	int i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j, m;

		j = size - 1;

		for (i = 0; i < size; i++)
		{
			m = size - j;
			tab(j--);
			for (k = 0; k < m; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

/**
 * tab - space out
 * @n: integer
 * Return: void
 */

void tab(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}
