#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array where we searching
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		return (-1);
	}
}
