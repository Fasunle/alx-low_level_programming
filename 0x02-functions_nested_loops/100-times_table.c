#include <stdio.h>
#include "main.h"

/**
 * print_times_table - multiplication table
 * @n: takes a number
 * Description: Create multiplication table
 * Return: returns void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					printf("   ");
				}
				else if (k <= 99)
				{
					printf("  ");
				}
				else if (k <= 999)
				{
					printf(" ");
				}

				if (j != n)
				{
					printf("%d,", k);
				}
				else
				{
					printf("%d", k);
				}
			}
			printf("\n");
		}
	}
}
