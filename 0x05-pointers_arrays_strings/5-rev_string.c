#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
	char tmp;

	int i, j, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	i = len - 1;
	for (j = 0; j < len / 2; j++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
	}
}
