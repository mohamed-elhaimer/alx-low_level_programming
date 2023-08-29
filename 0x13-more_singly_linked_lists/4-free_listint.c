#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: list that will be freed
 * Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	free(ptr);
}
