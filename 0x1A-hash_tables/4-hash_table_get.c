#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: the key you are looking for
 * Return: value associated with the element, or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL)
	return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);

		item = item->next;
	}
	return (NULL);
}
