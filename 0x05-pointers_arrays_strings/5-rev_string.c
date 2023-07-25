#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i, j, len;

	for (i = 0; i != '\0'; i++)
		_putchar(s[i]);
	len = i;
	for (j = len - 1; i >= 0; i--)
		_putchar(s[j]);
}
