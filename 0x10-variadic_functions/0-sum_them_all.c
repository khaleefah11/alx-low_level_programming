#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: The number of arguments passed to the function
 * @...: Unknown number of args expected from the function call
 *
 * Return: 0 if n == 0 || the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	unsigned int j, sum;

	va_start(para, n);

	sum = 0;
	for (j = 0; j < n; j++)
		sum += va_arg(para, int);

	va_end(para);

	return (sum);
}
