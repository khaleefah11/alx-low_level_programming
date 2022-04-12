#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabets in lowercase 10x
 * Void: Returs no parameters
 *
 * Return: Return the value of 0 upon success
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alpha;

	while (++count <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; ++alpha)
		_putchar(alpha);

	_putchar('\n');

	}
}
