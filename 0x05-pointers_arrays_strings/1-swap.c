include "main.h"

/**
 * swap_int - Function to swap the values of two integers
 * @a: A pointer to the int that will be updated
 * @b: A pointer to the second in that will be updated
 * Return: void
 */

vod swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
