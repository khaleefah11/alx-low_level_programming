#include "main.h"

/**
 * _putschar - Function to print a string
 * @str: The pointer the function acts upon
 *
 * Return: void
 */

void _putschar(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}

	_putchar('\n');
}
