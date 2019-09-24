#include "holberton.h"
/**
* main - entry block
* print msg
* Return: 0
**/
int main(void)
{
char *c = "Holberton";

while (*c)
{
_putchar(*c++);
}
_putchar('\n');
return (0);
}
