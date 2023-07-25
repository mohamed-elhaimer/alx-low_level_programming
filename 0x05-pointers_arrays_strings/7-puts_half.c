#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, len, j;

	while (str[i] != '\0')
	i++;
	len = i - 1;
	if (len % 2 == 0)
	{
	for (j = len / 2 + 1; str[j] != '\0'; j++)
	putchar(str[j]);
	}
	else
	{
	for (j = (len - 1) / 2 + 1; str[j] != '\0'; j++)
	putchar(str[j]);
	}
	putchar('\n');
}
