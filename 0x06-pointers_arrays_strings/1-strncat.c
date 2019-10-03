#include "holberton.h"

/**
* *_strncat - a function that concatenates two strings
* @dest: string
* @src: string
* @n: integer
* Return: string
**/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		
	}
	for (i = 0; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
