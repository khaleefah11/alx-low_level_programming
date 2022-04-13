#include "main.h"
/**
 * _islower - function to whether or not an alphabets is lowercase
 *@c: The int type parameter the function takes
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
