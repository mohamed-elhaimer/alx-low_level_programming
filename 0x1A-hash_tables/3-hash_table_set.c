#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: is the key
 * @value: is the value associated with the key
 * Return: 1 in the sucess and 0 in the failurre
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	hash_node_t *new_item;
	unsigned long  index;

	if (ht == NULL || *key == '\n' || *value == '\n')
	return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item == NULL)
	{
		new_item = create_node(key, value);
		if (new_item == NULL)
		return (0);
		ht->array[index] = new_item;
		return (1);
	}
	while (item != NULL)
	{
		if (strcmp(key, item->key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			return (1);
		}
		item = item->next;
	}
	new_item = create_node(key, value);
	if (new_item == NULL)
	return (0);
	new_item->next = ht->array[index];
	ht->array[index] = new_item;
	return (1);
}
/**
 * create_node - create a new node
 * @key: is the key
 * @value: is the value associated with the key
 * Return: node
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	return (NULL);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;
	return (newnode);
}
