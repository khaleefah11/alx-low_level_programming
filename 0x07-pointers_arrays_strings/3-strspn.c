#include "main.h"

/**
 * _strspn - Program that gets the length of a prefix substring
 * @s: source string
 * @accept: accepted characters
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}
