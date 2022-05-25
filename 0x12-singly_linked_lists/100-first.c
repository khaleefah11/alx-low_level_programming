#include <stdio.h>

/**
 * print_str - Function that prints a string before main
 *
 * Return: void
 */

void __attribute__ ((constructor)) print_str()
{
	printf("You're beat! and yet, you must allow");

	printf(",\nI bore my house upon my back!\n");
}
