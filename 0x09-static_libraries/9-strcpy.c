#include "main.h"

/**
 * _strcpy - Copies the string pointed to by a pointer variable
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will be changed
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
