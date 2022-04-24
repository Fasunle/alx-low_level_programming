#include "main.h"

/**
 * _strcat - contat two characters
 * @dest: destination char
 * @src: new char
 * @n: limit of concatenation
 * Return: new char
 */

char *_strcat(char *dest, char *src, int n)
{
	int dlen = 0, i = 0;

	while (dest[dlen])
	{

		dlen++;
	}

	while (i < n && src[i])
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}

	dest[dlen + n + 1] = '\0';
	return (dest);
}
