#include "main.h"

/**
 * _isalpha - prints integer
 * @c: accepts integer
 * Description: accepts char type
 * Return: returns int 0 or 1
 */
int _isalpha(int c)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (c == alphabet)
		{
			return (1);
		}
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		if (c == alphabet)
		{
			return (1);
		}
	}
	return (0);
}
