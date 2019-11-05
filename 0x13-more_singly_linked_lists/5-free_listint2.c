#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* free_listint2 - a func that frees a list
* @head: a pointer to a pointer that point to a list
*
*/

void free_listint2(listint_t **head)
{
	listint_t *free_ptr;

	while (*head != NULL && head != NULL)
	{
		free_ptr = *head;
		*head = (*head)->next;
		free(free_ptr);
	}
}
