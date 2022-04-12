#include "main.h"

/**
 * _islower - prints integer
 * @c: accepts integer
 * Description: accepts char type
 * Return: returns int 0 or 1
 */
int _islower(int c)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (c == alphabet)
		{
			return (1);
		}
	}
	return (0);
}
