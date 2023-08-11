#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate n bytes of a string to another string
 * @s1: first string to append to
 * @s2: second string cocatenate from
 * @n: number of bytes to concanete from s2 to s2
 * Return: return pointer after concanatation
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	if (n < strlen(s2))
	ptr = (char *)malloc(sizeof(char) * (strlen(s1) + n + 1));
	else
	ptr = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (ptr == 0)
	return (NULL);
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
