#include "main.h"
#include <stdlib.h>

/**
 * array_range - unction that creates an array of integers
 * @min: minimum of range stored
 * @max: maximum of range stored
 * Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == 0)
	return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
