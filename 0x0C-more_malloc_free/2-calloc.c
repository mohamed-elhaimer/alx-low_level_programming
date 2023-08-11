#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of element in array
 * @size: size of each element in array
 * Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == 0)
	return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
