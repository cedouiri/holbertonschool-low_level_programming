#include "holberton.h"
/**
*print_most_numbers- prints the numbers, from 0 to 14, 10 times
*
*Return: from 0 to 14 10 times, followed by a new line.
**/
void print_most_numbers(void)
{
int l, c;

	for (l = 0; l < 10; l++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
	}
	_putchar('\n');
}
