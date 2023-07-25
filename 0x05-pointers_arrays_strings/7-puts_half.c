#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, len, j;

	i = 0;
	while (str[i] != '\0')
	i++;
	len = i;
	if (len % 2 == 0)
	{
	for (j = len / 2; str[j] != '\0'; j++)
	_putchar(str[j]);
	}
	else
	{
	for (j = (len - 1) / 2 + 1; str[j] != '\0'; j++)
	_putchar(str[j]);
	}
	_putchar('\n');
}
