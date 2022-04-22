#include "holberton.c"

/**
 * _strcpy - copies source 'src' folder to destination 'dest' folder
 * @dest: char
 * @str: char
 * Return char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
