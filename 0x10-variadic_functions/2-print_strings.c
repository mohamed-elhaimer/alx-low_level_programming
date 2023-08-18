#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: sparator between number
 * @n: number of parametres passed to function
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		printf("(nil)");
		else
		printf("%s", str);
		if (separator && i < n - 1)
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
