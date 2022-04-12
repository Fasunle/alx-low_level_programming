#include "main.h"

/**
 * print_alphabet - prints alphabets
 * Description: does not accept any argument
 * Return: returns void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
