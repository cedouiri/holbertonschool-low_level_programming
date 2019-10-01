#include "holberton.h"

/**
* _atoi - convert a string to an integer
* @s: string.
* Return: integer.
**/

int _atoi(char *s)
{

	int i = 0;
	int j = 0;
	int k = 0;
	short sh = 0;
	int m = 0;

	i = -1;
	while (s[j] != '\0')
	{
		if (s[j] == '-')
			i = i * -1;

		if (s[j] >= '0' && s[j] <= '9')
		{
			k = k * 10;
			k = k - (s[j] - '0');
			m = 1;
		}
		else if (m == 1)
			break;
		j++;
		m++;
	}
	k = k * i;
	return (k);
}
