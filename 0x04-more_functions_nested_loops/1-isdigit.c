#include <ctype.h>
#include "main.h"
/**
 *_isdigit - Function to check whether or not an argument is a digit
 *@c: The parameter which the function acts upon
 *Return: Returns 1 if the character is in uppercase and 0 otherwise
 *
 */

int _isdigit(int c)
{

	if (isdigit(c))
		return (1);
	else
		return (0);
}
