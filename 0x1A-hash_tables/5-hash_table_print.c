#include "hash_tables.h"
/**
* hash_table_print - a function that prints a hash table
* @ht: is the hash table
* Return: nothing
**/
void hash_table_print(const hash_table_t *ht)
{
unsigned int idx = 0;
hash_node_t *temp;
char *flag = "";

if (ht == NULL)
return;
printf("{");
while (idx < ht->size)
{
temp = ht->array[idx];
while (temp != NULL)
{
printf("%s", flag);
printf("'%s': '%s'", temp->key, temp->value);
flag = ", ";
temp = temp->next;
}
idx++;
}
printf("}\n");
}
