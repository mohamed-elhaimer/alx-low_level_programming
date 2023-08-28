#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of linked list
 * @head: pointer of the fisrt element in the list
 * @n: data of the node
 * Return: the addresse of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
