#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: Pointer that copied string
*/
char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
	return (0);
	ptr = (char *)malloc(strlen(str) + 1 * sizeof(char));
	if (ptr == 0)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}

