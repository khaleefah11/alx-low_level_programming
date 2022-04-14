#include "main.h"
/**
 * print_numbers - Function to print numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;
	
	i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + "0");
	}

	_putchar("\n");
}
