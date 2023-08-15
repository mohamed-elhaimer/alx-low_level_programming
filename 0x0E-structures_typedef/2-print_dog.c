#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print attributes dog struct
 * @d: a dog structur
 * Return: Nothing
*/
void print_dog(struct dog *d)
{
	if (d == 0)
	return;
	else
	{
	if ((*d).name == 0)
	printf("Name: (nil)\n");
	else
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if ((*d).owner == 0)
	printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
	}
}
