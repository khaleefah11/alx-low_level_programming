#include "main.h"

/**
 * _strlen - length of a string
 * @s: Pointer to an int that will be modified
 *
 * Return: void
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}

	return (u);
}
