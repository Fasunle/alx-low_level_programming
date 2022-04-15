#include "main.h"

/**
 * _isupper - check if a character is uppercase
 * @c: character
 * Return: 1 if uppercase else 0
 */

int _isupper(int c)
{
	int alphabet;

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		if ( c == alphabet)
		{
			return (1);
		}
		/* otherwise c is not upper*/
		return (0);
	}
}
