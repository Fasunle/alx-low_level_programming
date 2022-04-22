#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to integer
 * @b: pointer to integer
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
