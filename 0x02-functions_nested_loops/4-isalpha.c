#include "main.h"
/**
 * _isalpha - function to check whether or not a character is an alphabet
 *@c: The int type parameter the function takes
 *
 * Return: Return the value of 1 upon success and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
