#include "main.h"
/**
 * islower - function to whether or not an alphabets is lowercase
 * Takes an int type parameter
 *
 * Return: Return the value of 0 upon success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
