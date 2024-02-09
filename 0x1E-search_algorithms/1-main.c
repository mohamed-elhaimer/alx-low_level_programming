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
	size_t low, height, middle, i;
	size_t target;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	height = size - 1;
	while (low <= height)
	{
		middle = low + (height - low) / 2;
		target = array[middle];

		printf("Searching in array");

		for (i = low; i <= height; i++)
			printf("%s %d", (i == 0) ? ":" : ",", array[i]);

		printf("\n");
		if ((size_t)target == (size_t)value)
			return (middle);
		else if ((size_t)value > (size_t)target)
			low = middle + 1;
		else
			height = middle - 1;

	}
	return (-1);
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
	printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
	printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
	return (EXIT_SUCCESS);
}
