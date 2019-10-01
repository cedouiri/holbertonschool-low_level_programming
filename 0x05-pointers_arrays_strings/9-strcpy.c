#include "holberton.h"

/**
* _strlen - get length of a string.
* @s: a pointer to a char
* Return: length of a string
**/

int _strlen(char *s)
{
	int l, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	return (l);
}

/**
* *_strcpy - copies the string pointed to by src
* @dest: a pointer to string
* @src: a pointer to int
* Return: the pointer to dest
**/

char *_strcpy(char *dest, char *src)
{
	int i;
	char *c;
	int l = _strlen(src);

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	c = dest;
	return (c);
}
