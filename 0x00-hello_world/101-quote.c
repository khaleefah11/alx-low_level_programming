#include <stdio.h>

/**
 * main - function
 * Void: Returs no parameters
 *
 * Return: Return the value of 1
 */
int main(void)
{

	/* initializing strings */
	char str1[] = "and that piece of art is useful\"";
	char str2[] = " - Dora Korpar, 2015-10-19";

	/* concatenating strings */
	strcat(str1, str2);

	/* writing to stderr */
	fprintf(stderr, str1);

	return (1);
}
