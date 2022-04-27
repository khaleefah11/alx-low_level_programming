#include "main.h"

/**
 * *_memset - Function that fills memory with a constant byte
 * @s: the pointer to the block of memory to be filled
 * @b: the character to fill s
 * @n: the number of bytes to be filled
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
