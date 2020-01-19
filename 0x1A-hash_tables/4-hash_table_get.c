#include "hash_tables.h"
/**
* hash_table_get - a function that retrieves a
*value associated with a key
* @ht: is the hash table you want to look into
* @key: is the key you are looking for
* Return: the value associated with the element,
*or NULL if key couldn0€™t be found
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *temp;

	if (ht != NULL || key != NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
