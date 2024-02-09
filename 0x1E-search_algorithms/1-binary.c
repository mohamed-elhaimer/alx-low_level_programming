#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: return the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	size_t low, height, middle, target;

	low = 0;
	height = size - 1;
	while (low <= height)
	{
		middle = low + (height - low) / 2;
		target = array[middle];
		int i;

		printf("Searching in array");

		for (i = low; i <= height; i++)
			printf("%s %d", (i == 0) ? ":" : ",", array[i]);

		printf("\n");
		if (value > target)
			low = middle + 1;
		else if (value < target)
		{
			height = middle - 1;
		}
		else
			return (middle);

	}
	return (-1);
}
