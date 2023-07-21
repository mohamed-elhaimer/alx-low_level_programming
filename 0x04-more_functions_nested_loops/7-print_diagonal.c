#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int i, c;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
			_putchar(' ');
		for (i = 0; i < n; i++)
		_putchar('\\');
		_putchar('\n');
	}
	else
	_putchar('\n');
}
