#include "main.h"

/**
 * print_sign - prints sign (+, -, 0)
 * @c: accepts integer
 * Description: accepts char type
 * Return: returns int 0 or 1
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
