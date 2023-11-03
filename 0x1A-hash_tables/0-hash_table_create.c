#include "hash_tables.h"
/**
 * hash_table_create - c-function that create a hash table
 * @size: the size of the array
 * Return: pointer to new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Table;
	int i;

	Table = (hash_table_t *) malloc(size * sizeof(hash_table_t));
	if (Table == NULL)
	return (NULL);
	Table->size = size;
	Table->array = (hash_node_t **) calloc(Table->size,  sizeof(hash_node_t *));
	for (i = 0; i < size; i++)
	{
		Table->array[i] = NULL;
	}
	return (Table);
