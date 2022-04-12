#include "main.h"
/**
 * print_alphabet - function to print alphabets in lowercase
 * Void: Returs no parameters
 *
 * Return: Return the value of 0 upon success
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{

		_putchar(alpha);
		_putchar('\n');
	}
}
