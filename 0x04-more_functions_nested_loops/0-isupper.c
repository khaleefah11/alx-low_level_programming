#include <ctype.h>
#include "main.h"
/**
 *_isupper - Function to check whether or not a character is in uppercase
 *@c: The parameter which the function acts upon
 *Return: Returns 1 if the character is in uppercase and 0 otherwise
 *
 */

int _isupper(int c)
{

	char c;

	if (isupper(c))
		return (1);
	else
		return (0);
}
