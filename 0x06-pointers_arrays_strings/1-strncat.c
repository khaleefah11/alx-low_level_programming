#include "main.h"

/**
 * *_strncat - Function that concatenates two strings using at most n bytes
 * @dest: second string to be concatenated
 * @src: first string to be appended to dest until n limit
 * @n: number of bytes that to be used from src
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
		{
			dest[x] = src[y];
		}
	}

	return (dest);
}
