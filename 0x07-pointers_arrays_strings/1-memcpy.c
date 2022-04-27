#include "main.h"

/**
 * *_memcpy - Function that copies memory area
 * @dest: the destination memory area
 * @src: the memory area to be copied from
 * @n: bytes to be copied from memory area
 * Return: Returns the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
}
