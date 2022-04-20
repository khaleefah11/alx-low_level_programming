#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints elements of an array of integers
 * @a: A pointer to an int which the function takes as an argument
 * @n: Number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i, n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
}
