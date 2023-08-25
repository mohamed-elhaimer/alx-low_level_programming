#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: name of list
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
size_t len = 0;

	list_t *p;

	p = (list_t *) h;
	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", p->len, p->str);
		len++;
		p = p->next;
	}
return (len);
}
