#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - dog attributes
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: the attributes of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
