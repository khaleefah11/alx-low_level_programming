#include <stdio.h>

/**
 * main - function
 * Void: Returs no parameters
 *
 * Return: Return the value of 0 upon success
 */
int main(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;

		else if (alphabet == 'e')
			continue;

		putchar(alphabet);
	}

	putchar('\n');


	return (0);
}
