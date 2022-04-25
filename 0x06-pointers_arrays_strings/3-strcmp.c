#include "main.h"

/**
 * _strcmp - Function that copies two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: -ve if s1 < s2 || 0 if matching || +ve int if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}

	return (0);
}
