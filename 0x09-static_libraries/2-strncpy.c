#include "main.h"

/**
 * *_strncpy - Function that copies a string
 * @dest: string to copy to
 * @src: string to be copied from
 * @n: int used to determing how many bytes to be copied
 * Return: Returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for (; n > x; x++)
		dest[x] = '\0';

	return (dest);
}
