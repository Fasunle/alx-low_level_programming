#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: an integer
 * @b: an integer
 * @c: an integer
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (a > c && c > b)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else if (c > a && a > b)
	{
		largest = c;
	}
	else if (c > b && b > a)
	{
		largest = c;
	}

	return (largest);
}
