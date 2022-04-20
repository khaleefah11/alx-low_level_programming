#include "main.h"

/**
 * print_rev - Function to print a string in reverse order
 * @s: The pointer which the function takes as an argument
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i:

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
