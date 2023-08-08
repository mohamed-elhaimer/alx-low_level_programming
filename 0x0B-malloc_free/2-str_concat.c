#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the resulting string
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	ptr = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (ptr == 0)
	return (NULL);
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
