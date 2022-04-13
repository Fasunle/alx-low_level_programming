#include <stdio.h>
#include "main.h"

/**
 * times_table - multiples of 9
 * @void: no argument
 * Description: Multiply 9 with 1 through 12
 * Return: returns void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				printf(" ");
			}
			else
			{
				printf("  ");
			}

			if (j != 9)
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
