#include "hash_tables.h"
/**
* hash_table_set - a function that adds an element
*to the hash table
* @ht: is the hash table you want to add or update
*the key/value to
* @key: is the key
* @value: is the value of the key
* Return: 1 if it succeeded, 0 otherwise
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *NewNode, *p;
	int idx;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	p = ht->array[idx];
	while (p != NULL)
	{
		if (strcmp(p->key, key) == 0)
		{
			free(p->value);
			p->value = strdup(value);
			return (1);
		}
		p = p->next;
	}
	NewNode = malloc(sizeof(hash_node_t));
	if (NewNode == NULL)
		return (0);
	NewNode->key = strdup(key);
	NewNode->value = strdup(value);
	if (NewNode->key == NULL || NewNode->value == NULL)
	{
		free(NewNode->key);
		free(NewNode->value);
		free(NewNode);
		return (0);
	}
	NewNode->next = NULL;
	if (ht->array[idx] == NULL)
		ht->array[idx] = NewNode;
	else
	{
		NewNode->next = ht->array[idx];
		ht->array[idx] = NewNode;
	}
	return (1);
}
