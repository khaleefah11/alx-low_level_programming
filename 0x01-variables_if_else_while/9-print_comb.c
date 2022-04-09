#include <stdio.h>

/**
 * main - function
 * Void: Returs no parameters
 *
 * Return: Return the value of 0 upon success
 */
int main(void)
{

	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		if (num == 57)
		{
			break;
		}

		putchar(',');

		putchar(' ');
	}

	putchar('\n');


	return (0);
}
