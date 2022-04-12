#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 * Description: prints a trough x 10 times
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char alphabet;

		counter++;
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
