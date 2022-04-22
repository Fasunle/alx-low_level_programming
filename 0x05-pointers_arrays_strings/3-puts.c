#include "holberton.h"

/**
 * _puts - puts a character
 * @str: a character
 * Return: None
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
