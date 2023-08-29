#include "lists.h"
/**
 * *add_nodeint_end - add new node to the end of the list
 * @head: pointer of the first element of the list
 * @n: data path of the node
 * Return: the address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	}
	return (temp);
}
