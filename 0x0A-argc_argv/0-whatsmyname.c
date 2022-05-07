#include <stdio.h>

/**
 * main - Program that prints its name
 * @argc: offset count
 * @argv: offset count
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
