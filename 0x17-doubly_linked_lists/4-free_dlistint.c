#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: the head of the list
 * Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
