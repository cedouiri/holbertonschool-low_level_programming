#include "hash_tables.h"
/**
* hash_table_delete - a function that deletes a hash table
* @ht: is the hash table
* Return: nothing
**/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *current, *temp;
unsigned int idx = 0;

temp = ht->array[idx];
current = temp;
if (ht == NULL)
return;

while (idx < ht->size)
{
temp = ht->array[idx];
while (temp != NULL)
{
current = temp->next;
free(temp->key);
free(temp->value);
free(temp);
temp = current;
}
idx++;
}
free(ht->array);
free(ht);
}
