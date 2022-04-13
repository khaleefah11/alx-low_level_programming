#include "main.h"
/**
 *print_sign - function to print the sign of a number
 *@n: The int type parameter the function takes
 *
 * Return: Return the value of 1 if the number is +ve || -1 if -ve ||
 * Return 0 if the number is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar ('-');
	return (-1);
	}
}
