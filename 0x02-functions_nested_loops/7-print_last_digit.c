#include "main.h"

/**
 * print_last_digit - prints modulus
 * @c: accepts integer
 * Description: return modulus
 * Return: returns modulus
 */
int print_last_digit(int c)
{
	int ln = c % 10;

	if (ln < 0)
	{
		ln = ln * -1;
	}
	_putchar(ln + '0');
	return (ln);
}
