#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, len, j;

	j = 0;
	while (s[j] != '\0')
		j++;
	len = j;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\0');
}
