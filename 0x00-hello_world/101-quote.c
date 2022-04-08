#include <stdio.h>
#include <string.h>

/**
 * main - function
 * Void: Returs no parameters
 *
 * Return: Return the value of 1
 */
int main(void)
{

	/* initializing and declaring strings */
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	/* writing to stderr */
	fprintf(stderr, str1);

	return (1);
}
