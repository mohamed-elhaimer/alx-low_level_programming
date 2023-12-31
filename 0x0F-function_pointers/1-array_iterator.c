#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 * Return : void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
