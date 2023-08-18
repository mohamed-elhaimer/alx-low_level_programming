#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Return sum of all the parameters passed to function
 * @n: numbers of arguments
 *
 * Return: sum of its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	if (n == 0)
	return (0);
	va_start(args, n);

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		int in = va_arg(args, int);

		sum += in;
	}
	va_end(args);
	return (sum);
}
