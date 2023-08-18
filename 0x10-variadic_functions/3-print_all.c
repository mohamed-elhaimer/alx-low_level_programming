#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - prints int
 * @args: arguments from print_all
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints float
 * @args: arguments from print_all
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_char - prints int
 * @args: arguments from print_all
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_str - prints string
 * @args: arguments from print_all
 */
void print_str(va_list args)
{
	char *s = va_arg(args, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

/**
 * print_all - prints any type
 * @format: arguments to print
 */

void print_all(const char * const format, ...)
{
va_list list;
int i = 0, j = 0;
char *sep = "";

printTypeStruct printType[] = {
	{ "i", print_int },
	{ "f", print_float },
	{ "c", print_char },
	{ "s", print_str },
	{NULL, NULL}
};


va_start(list, format);

while (format && format[i])
{
	j = 0;
	while (j < 4)
	{
		if (*printType[j].type == format[i])
		{
			printf("%s", sep);
			printType[j].printer(list);
			sep = ", ";
			break;
		}
		j++;
	}
	i++;
}

printf("\n");
va_end(list);
}
