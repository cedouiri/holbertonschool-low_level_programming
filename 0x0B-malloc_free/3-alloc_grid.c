#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* alloc_grid - a function that returns a pointer to 2 dimensional array of int
* @width: holds the integer for width
* @height: holds the integer for height
* Return: return a pointer to the array otherwise return NULL
**/

int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	p = malloc(sizeof(void *) * height);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i += 1)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			while (i)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j += 1)
			p[i][j] = 0;
	}
	return (p);
}
