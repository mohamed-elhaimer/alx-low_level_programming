#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: lsit
 * Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr, *current;

	if (*head == NULL || head == NULL)
	return;
	current = *head;
	while (current != NULL)
	{
		ptr = current->next;
		free(current);
		current = ptr;
	}
	*head = NULL;
}
