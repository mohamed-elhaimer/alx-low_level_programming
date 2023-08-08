#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * create_array - function that create an array of chars
 * @size: size of array
 * @c: charcter that intialized in array
 * Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	return (0);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[i] = '\0';
	return (ptr);
}
